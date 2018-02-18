#pragma once

#include <QObject>

#include "Definitions.h"

class MODEL_EXPORT Serializer
	: public QObject
{
	Q_OBJECT

public:
	Serializer(QObject* parent = nullptr) : QObject(parent) { }
	virtual ~Serializer() = default;

	virtual void init() = 0;

	struct SerializeOptions
	{
		optional<IntVector2D> universeSize;
		optional<IntVector2D> gridSize;
		optional<uint> maxThreads;
	};
	virtual void serialize(SimulationController* simController, SerializeOptions options = SerializeOptions()) = 0;
	Q_SIGNAL void serializationFinished();
	virtual string const& retrieveSerializedSimulation() = 0;
	virtual SimulationController* deserializeSimulation(string const& content) = 0;

	virtual string serializeDataDescription(DataDescription const& desc) const = 0;
	virtual DataDescription deserializeDataDescription(string const& data) = 0;

	virtual string serializeSymbolTable(SymbolTable const* symbolTable) const = 0;
	virtual SymbolTable* deserializeSymbolTable(string const& data) = 0;

	virtual string serializeSimulationParameters(SimulationParameters const* parameters) const = 0;
	virtual SimulationParameters* deserializeSimulationParameters(string const& data) = 0;
};
