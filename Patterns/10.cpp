/*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    string s  = "";
    
    for (int i = 0; i < n; i++) {
        s += "*";
        cout << s << "\n";
    }
    
    for (int i = n - 1; i > 0; i--) {
        cout << s.substr(0, i) << "\n";
    }
    
}

int main()
{
    // Taking Input
    int n;
    cin >> n;
    
    // Printing Pattern
    print_pattern(n);

    return 0;
}
