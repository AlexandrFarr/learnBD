#include "ConnectToBD.h"


ConnectToBD::ConnectToBD(QWidget *parent)
    : QMainWindow(parent)
{
   
    

    ui.setupUi(this);
    connect(ui.pushButtonConnect, &QPushButton::clicked, this, &ConnectToBD::connectB);
}

void ConnectToBD::connectB()
{
    //ui.lineEditConnect->setText("ehohoh");
}

ConnectToBD::~ConnectToBD()
{}
