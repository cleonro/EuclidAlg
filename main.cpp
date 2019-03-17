#include <QCoreApplication>

#include "tests.h"

int main(int argc, char *argv[])
{
    //QCoreApplication app(argc, argv);

    Q_UNUSED(argc)
    Q_UNUSED(argv)

    tests::execute();

    //return app.exec();
}
