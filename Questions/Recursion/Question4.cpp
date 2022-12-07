// Print all the powerset of a given string

// Time Complexity O(2^n)

#include <iostream>

using namespace std;

void powerset(string s, int i, string curr)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }

    powerset(s, i + 1, curr + s[i]);
    powerset(s, i, curr);
}

int main()
{

    return 0;
}