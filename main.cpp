#include <QCoreApplication>

#include "tests.h"

int main(int argc, char *argv[])
{
    //QCoreApplication app(argc, argv);

    Q_UNUSED(argc)
    Q_UNUSED(argv)
    int c = 0;
    while(c != '0')
    {
        c = choice();
        switch (c)
        {
            case '1':
                test_1_euclid();
                break;
            case '2':
                test_2_prime();
                break;
            case '3':
                test_3_prime_factorization();
                break;
        }
    }

    //return app.exec();
}
