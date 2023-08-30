/*
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    int space = n - 1;
    
    for (int i = 0; i < n; i++) {
        
        for(int j = 0; j < (n-space); j++ ) {
            cout << "*";
        }
        
        for (int j = 0; j < (2 * space); j++) {
            cout << " ";
        }
        
        for(int j = 0; j < (n-space); j++ ) {
            cout << "*";
        }
        cout << "\n";
        space--;
    }
    space++;
    for (int i = n - 1; i > 0; i--) {
        space++;
        for(int j = 0; j < (n-space); j++ ) {
            cout << "*";
        }
        
        for (int j = 0; j < (2 * space); j++) {
            cout << " ";
        }
        
        for(int j = 0; j < (n-space); j++ ) {
            cout << "*";
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
