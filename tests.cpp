#include "tests.h"
#include "algorithms.h"

#include <iostream>

using namespace std;

namespace tests
{

void test_1_euclid()
{
    int a = 0;
    cout << "a = ";
    cin >> a;
    int b = 0;
    cout << "b = ";
    cin >> b;
    cout << "cmmdc(" << a <<", " << b << ") = " << cmmdc(a, b) << endl;
}

void test_2_prime()
{
    int a = 0;
    int b = 0;
    cout << "a = ";
    cin >> a;
    cout << "is_prime_brute(" << a << ") = " << is_prime_brute(a, &b)
         << ", smallest_div = " << b << endl;
}

void test_3_prime_factorization()
{
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
}

}
