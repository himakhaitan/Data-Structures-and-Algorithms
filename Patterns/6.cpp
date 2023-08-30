/*
    12345
    1234
    123
    12
    1
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
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
