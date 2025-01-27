#pragma once

#include <QDialog>

#include "EngineInterface/Definitions.h"

namespace Ui {
class NewHexagonDialog;
}

class NewHexagonDialog
	: public QDialog
{
    Q_OBJECT
    
public:
    NewHexagonDialog(SimulationParameters const& simulationParameters, QWidget *parent = nullptr);
    virtual ~NewHexagonDialog();

    int getLayers () const;
    double getDistance () const;
    double getCellEnergy () const;
    int getColorCode() const;

private:
	Q_SLOT void okClicked();

private:
    Ui::NewHexagonDialog *ui;
};

