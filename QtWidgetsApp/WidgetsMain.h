#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WidgetsMain.h"

class WidgetsMain : public QMainWindow
{
    Q_OBJECT

public:
    WidgetsMain(QWidget *parent = Q_NULLPTR);

private:
    Ui::WidgetsMainClass ui;
};
