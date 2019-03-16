#include <QCoreApplication>

#include <iostream>
#include <map>

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

bool is_prime_brute(int a, int *smallest_div = nullptr)
{
    bool r = true;
    if(smallest_div != nullptr)
    {
        *smallest_div = -1;
    }
    for(int i = 2; i <= a / 2; ++i)
    {
        if((a % i == 0))
        {
            r = false;
            if(smallest_div != nullptr)
            {
                *smallest_div = i;
            }
            break;
        }
    }

    return r;
}

void prime_factors(int a, int last_div, map<int, int> &result)
{
    size_t sz = result.size();
    for(int i = last_div; i <= a / 2; ++i)
    {
        if(a % i == 0)
        {
            result[i] += 1;
            a = a / i;
            prime_factors(a, i, result);
            break;
        }
    }
    if(sz == result.size())
    {
        result[a] += 1;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    //1 - Euclid algorithm
//    int a = 0;
//    cout << "a = ";
//    cin >> a;
//    int b = 0;
//    cout << "b = ";
//    cin >> b;
//    cout << "cmmdc(" << a <<", " << b << ") = " << cmmdc(a, b) << endl;

    //2 - Test if number is prime
//    cout << " a = ";
//    cin >> a;
//    cout << "is_prime_brute(" << a << ") = " << is_prime_brute(a, &b)
//         << ", smallest_div = " << b;

    //3 - Prime factors decomposition
    int a = 0;
    cout << "a = ";
    cin >> a;
    map<int, int> r;
    prime_factors(a, 2, r);
    cout << a << " = ";
    auto it = r.begin();
    while(it != r.end())
    {
        int divisor = it->first;
        int power = it->second;
        cout << divisor;
        if(power > 1)
        {
            cout << "^" << power;
        }
        ++it;
        if(it != r.end())
        {
            cout << " * ";
        }
    }
    cout << endl;

    return app.exec();
}
