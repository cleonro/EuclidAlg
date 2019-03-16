#include <QCoreApplication>

#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    int r = a % b;
    if(r == 0)
    {
        return b;
    }
    return cmmdc(b, r);
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    int a = 0;
    cout << " a = ";
    cin >> a;
    int b = 0;
    cout << "b = ";
    cin >> b;
    cout << "cmmdc(" << a <<", " << b << ") = " << cmmdc(a, b) << endl;

    return app.exec();
}
