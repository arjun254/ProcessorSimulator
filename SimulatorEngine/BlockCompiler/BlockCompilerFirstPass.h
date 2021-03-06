#ifndef _BLOCK_COMPILER_FIRST_PASS_H_
#define _BLOCK_COMPILER_FIRST_PASS_H_

#include <vector>
#include <queue>
#include <memory>
#include <unordered_set>
#include <unordered_map>

#include <SimulationUnit\SimulationUnit.h>
#include <Operation\OutgoingEdges\OutgoingEdgesVisitor.h>
#include <Decoder\Decoder.h>
#include <State\State.h>

class BlockCompilerSimulatorEngine;

class BlockCompilerFirstPass : public OutgoingEdgesVisitor
{
public:
	BlockCompilerFirstPass();
	void Perform(State* s, Address startFromAddress, Decoder& decoder, std::unordered_map<Address, std::shared_ptr<SimulationUnit>>* simulationUnitTable, BlockCompilerSimulatorEngine& simulatorEngine);

	// Inherited via OutgoingEdgesVisitor
	virtual void Visit(UnconditionalJumpOutgoingEdges & og) override;
	virtual void Visit(ConditionalJumpOutgoingEdges & og) override;
	virtual void Visit(UnconditionalCallOutgoingEdges & og) override;
	virtual void Visit(ConditionalCallOutgoingEdges & og) override;
	virtual void Visit(UnconditionalReturnOutgoingEdges & og) override;
	virtual void Visit(ConditionalReturnOutgoingEdges & og) override;
	virtual void Visit(NextOutgoingEdges & og) override;
	virtual void Visit(NonCompilableOutgoingEdges & og) override;
	virtual void Visit(NoneOutgoingEdges & og) override;
private:
	void AddToDiscoveredQueue_(Address address);

	State* s_;
	bool isEndOfBasicBlockFound_;
	Address address_;
	std::queue<Address> toProcessStartAddresses_;
	std::unordered_set<Address> discoveredStartAddresses_;
	std::unordered_map<Address, std::shared_ptr<SimulationUnit>>* simulationUnitTable_;
};

#endif