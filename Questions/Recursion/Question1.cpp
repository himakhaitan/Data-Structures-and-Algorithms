// Find the number of ways to reach from first to last box in a (n x m) matrix.

#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;

    return solve(n - 1, m) + solve(n, m - 1);
}

int main()
{
    cout << solve(3, 3) << endl;
    return 0;
}