#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VisualMasterFrame.h"

class VisualMasterFrame : public QMainWindow
{
    Q_OBJECT

public:
    VisualMasterFrame(QWidget *parent = Q_NULLPTR);

private:
    Ui::VisualMasterFrameClass ui;
};
