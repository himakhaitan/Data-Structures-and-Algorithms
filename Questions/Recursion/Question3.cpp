// Check if a string is a palindrome

#include <iostream>

using namespace std;

bool isPalindrome(string s, int l, int r)
{
    // Pointers crossed the middle
    if (l >= r)
    {
        return true;
    }

    // Checking for equality
    if (s[l] != s[r])
    {
        return false;
    }
    
    return isPalindrome(s, l + 1, r - 1);
}

int main()
{
    cout << isPalindrome("racecar", 0, 6) << endl;
    return 0;
}