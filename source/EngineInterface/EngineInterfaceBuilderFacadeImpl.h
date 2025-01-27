﻿#pragma once
#include "EngineInterfaceBuilderFacade.h"

class EngineInterfaceBuilderFacadeImpl
	: public EngineInterfaceBuilderFacade
{
public:
	~EngineInterfaceBuilderFacadeImpl() = default;

	Serializer* buildSerializer() const override;
    DescriptionHelper* buildDescriptionHelper() const override;
	CellComputerCompiler* buildCellComputerCompiler(SymbolTable* symbolTable, SimulationParameters const& parameters) const override;
    SimulationChanger* buildSimulationChanger(SimulationMonitor* monitor, NumberGenerator* numberGenerator) const override;

	SymbolTable* getDefaultSymbolTable() const override;
	SimulationParameters getDefaultSimulationParameters() const override;
    ExecutionParameters getDefaultExecutionParameters() const override;
};
