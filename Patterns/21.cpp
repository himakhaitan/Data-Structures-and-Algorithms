/*
    * * * * * 
    *       *
    *       *
    *       *
    * * * * *
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
    string complete = "";
    
    for (int i =0; i < n; i++) {
        complete += "* ";
    }
    cout << complete << "\n";
    
    for (int i = 1; i < n - 1; i++) {
        cout << "* ";
        for (int j = 1; j < n - 1; j++) {
            cout << "  ";
        }
        cout << "*\n";
    }
    
    cout << complete << "\n";
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
