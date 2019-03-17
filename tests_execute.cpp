#include "tests.h"

#include <iostream>
#include <functional>
#include <string>
#include <map>

using namespace std;

namespace tests
{

static map<int, function<void(void)>> tests{
                                            {1, test_1_euclid},
                                            {2, test_2_prime},
                                            {3, test_3_prime_factorization}
                                      };

static map<int, string> test_names{
                                            {1, "GCD - Euclid algorithm"},
                                            {2, "Prime number test - brute force"},
                                            {3, "Prime numbers factorization"}
                                      };

static int list()
{
    cout << endl;
    cout << "0) Quit" << endl;
    auto it2 = test_names.begin();
    for(auto it1 = tests.begin(); it1 != tests.end(); ++it1, ++it2)
    {
        cout << it1->first << ") " << it2->second << endl;
    }

    int c = 0;
    cin >> c;
    cout << endl;
    return c;
}

void execute()
{
    int c = -1;
    while(c != 0)
    {
        c = list();
        auto it = tests.find(c);
        if(it != tests.end())
        {
            it->second();
        }
    }
}

}
