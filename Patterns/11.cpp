/*
    1 
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    bool main = true;
    
    for (int i = 0; i < n; i++) {
        
        bool print = main;
        for (int j = 0; j < i + 1; j++) {
            cout << print << " ";
            print = !print;
        }
        cout << "\n";
        main = !main;
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
