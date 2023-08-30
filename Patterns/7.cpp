/*
        *
       ***
      *****
     *******
    *********
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    int blank = n - 1;
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < blank; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < (2 * (i + 1) - 1); j++) {
            cout << "*";
        }
        
        cout << "\n";
        blank--;
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
