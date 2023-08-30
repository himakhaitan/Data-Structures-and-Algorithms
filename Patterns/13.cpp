/*
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    int counter = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            counter++;
            
            cout << counter << " ";
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
