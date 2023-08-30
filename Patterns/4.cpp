/*
    1
    22
    333
    4444
    55555
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
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
