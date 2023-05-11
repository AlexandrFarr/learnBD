#include "ConnectToBD.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectToBD w;
    w.show();



    return a.exec();
}
