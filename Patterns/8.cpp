/*
    *********
     *******
      *****
       ***
        *
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    int blank = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        
        for (int j = 0; j < blank; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < (2 * (i + 1) - 1); j++) {
            cout << "*";
        }
        
        cout << "\n";
        blank++;
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
