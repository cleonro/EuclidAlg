#include "algorithms.h"

int cmmdc(int a, int b)
{
    int r = a % b;
    if(r == 0)
    {
        return b;
    }
    return cmmdc(b, r);
}

bool is_prime_brute(int a, int *smallest_div)
{
    bool r = true;
    if(smallest_div != nullptr)
    {
        *smallest_div = a;
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
