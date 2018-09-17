#include "SimulatorEngine.h"

SimulatorEngine::SimulatorEngine(const std::vector<Byte>& rom, const IoBridge & ioBridge) :
	state_(),
	s_(&state_),
	ioBridge_(ioBridge),
	decoder_(s_, ioBridge_)
{
	SetMemory(rom);
}

void SimulatorEngine::SetMemory(const std::vector<Byte>& rom)
{
	if (s_->m != nullptr)
		delete[] s_->m;
	s_->m = new Memory[rom.size()];
	for (int i = 0; i < rom.size(); ++i)
		s_->m[i].byte = rom[i];
}
