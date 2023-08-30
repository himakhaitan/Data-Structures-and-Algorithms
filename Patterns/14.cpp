/*
    A
    AB
    ABC
    ABCD
    ABCDE
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
   
   for (int i = 0; i < n; i++) {
        char start = 'A';
        for (int j = 0; j < i+1; j++) {
          cout << start;
          start++;
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
