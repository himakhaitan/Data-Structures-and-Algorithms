/*
    A
    BB
    CCC
    DDDD
    EEEEE
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
   char start = 'A';
   
   for (int i =1; i <= n; i++) {
       for (int j = 0; j < i; j++) {
           cout << start;
       }
       cout << "\n";
       start++;
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

