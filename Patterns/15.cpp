/*
    ABCDE
    ABCD
    ABC
    AB
    A
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
   
   for (int i = n- 1; i >= 0; i--) {
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
