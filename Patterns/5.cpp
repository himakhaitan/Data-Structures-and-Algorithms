/*
    *****
    ****
    ***
    **
    *
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    string s = "";
    
    for (int i = 0; i < n; i++) {
        s += "*";
    }
    
    for (int i = n; i > 0; i--) {
        cout << s << "\n";
        s.resize(i - 1);
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
