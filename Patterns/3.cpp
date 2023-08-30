/*
    1
    12
    123
    1234
    12345
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    for (int i = 0; i < n ; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }
        cout << "\n";
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
