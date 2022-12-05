// Step by Step

#include <iostream>

using namespace std;

int solve(int A)
{
    A = abs(A);
    int running_sum = 0, step = 0;

    while (running_sum < A)
    {
        step++;
        running_sum += step;
    }

    while ((running_sum - A) % 2 != 0)
    {
        step++;
        running_sum += step;
    }

    return step;
}