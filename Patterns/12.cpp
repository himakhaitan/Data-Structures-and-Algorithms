/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
   
   int blanks = n - 1;
   
   for (int i = 0; i < n; i++) {
       int start = 0;
       
       for (int j = 0; j < i+ 1 ;j++) {
           start++;
           cout << start;
       }
       
       for (int j = 0; j < (2* blanks); j++) {
           cout << " ";
       }
       
       for (int j = 0; j < i+1; j++) {
           cout << start;
           start--;
       }
       
       cout << "\n";
       blanks--;
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
