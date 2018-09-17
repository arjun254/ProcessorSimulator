#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>

#include <Global\Global.h>
#include <Rom\RomLoader.h>
#include <IO\IoBridge.h>
#include <IO\Mits88Sio.h>
#include <SimulatorEngine\Interpreter\InterpreterSimulatorEngine.h>
#include <SimulatorEngine\BlockCompiler\BlockCompilerSimulatorEngine.h>
#include <SimulatorEngine\MethodCompiler\MethodCompilerSimulatorEngine.h>
#include <SimulatorEngine\TraceCompiler\TraceCompilerSimulatorEngine.h>
#include <Time\Timer.h>

int main()
{
	/*
	* Ask user input for the name of romFile, number of iterations,
	* and the type of simulator engine.
	*/
	std::string romFileName;
	std::cout << "Rom? ";
	std::cin >> romFileName;
	
	int count;
	std::cout << "Number of iterations? ";
	std::cin >> count;
	
	char engineType;
	std::cout << "Simulator Engine (i/b/m/t)? ";
	std::cin >> engineType;

	std::ifstream fIn(romFileName, std::ios::in | std::ios::binary);
	std::vector<Byte> rom;
	RomLoader::LoadFromFile(fIn, rom, 65536);

	auto mits88Sio = std::make_shared<Mits88Sio>(std::cout);
	IoBridge ioBridge;
	ioBridge.Map(0x00, mits88Sio);
	ioBridge.Map(0x01, mits88Sio);
	
	std::unique_ptr<SimulatorEngine> se;
	if (engineType == 'b')
		se = std::make_unique<BlockCompilerSimulatorEngine>(rom, ioBridge);
	else if (engineType == 'm')
		se = std::make_unique<MethodCompilerSimulatorEngine>(rom, ioBridge);
	else if (engineType == 't')
		se = std::make_unique<TraceCompilerSimulatorEngine>(rom, ioBridge);
	else
		se = std::make_unique<InterpreterSimulatorEngine>(rom, ioBridge);
	
	Timer timer;	

	/*
	* Set Memory of the simulator engine. Initialize the timer 
	* and start executing the instructions from address 0x00.
	*/
	for (int i = 0; i < count; ++i)
	{
		se->SetMemory(rom);
		timer.Start();
		se->Run(0x00);
		timer.Stop();
		std::cout << "Iteration: " << i << std::endl;
		std::cout << "Execution time: " << timer.GetTimeElapsedInMilli() << "ms" << std::endl;
	}

	std::cout << std::endl << "Press [ENTER] to continue..." << std::endl;
	std::fflush(stdin);
	std::getchar();
	return 0;
}
