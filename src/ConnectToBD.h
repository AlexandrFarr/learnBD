#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ConnectToBD.h"


class ConnectToBD : public QMainWindow
{
    Q_OBJECT

public:
    ConnectToBD(QWidget *parent = nullptr);
    ~ConnectToBD();

public slots:
    void connectB();

private:
    Ui::ConnectToBDClass ui;
};
