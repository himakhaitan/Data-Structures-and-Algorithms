// Print all possible permutations of a string

#include <iostream>

// O(n*n!)

using namespace std;

void permutation(string s, int l, int r)
{
    if (l == r)
    {
        // All the charachters are consumed
        cout << s << endl;
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permutation(s, l + 1, r);

        // This is called Back Tracking
        swap(s[l], s[i]);
    }
}

int main()
{
    permutation("abc", 0, 2);
    return 0;
}