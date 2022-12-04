// Modulo Arithmetic

#include <iostream>

using namespace std;

long fastPower(long a, long b, int n)
{
    long res = 1;

    while (b > 0)
    {
        if ((b & 1) != 0) // b is Odd
            res = (res * a % n) % n;

        a = (a % n * a % n) % n;
        b = b >> 1; // Divide by 2
    }

    return res;
}