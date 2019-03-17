#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <map>

using namespace std;

int cmmdc(int a, int b);

bool is_prime_brute(int a, int *smallest_div = nullptr);

void prime_factors(int a, int last_div, map<int, int> &result);

#endif // ALGORITHMS_H
