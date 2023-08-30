/*
    A
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA

*/

#include <bits/stdc++.h>

using namespace std;

void print_pattern(int n) {
    
   char start = 'A';
   int space = n - 1;
   
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < space; j++) {
           cout << " ";
       }
       char work = start;
       
       for (int j = 0; j < (n - space); j++){
           cout << work;
           work++;
       }
       work--;
       for (int j = 0; j < (n - space - 1); j++){
           work--;
           cout << work;
       }
       cout << "\n";
       space--;   }
   
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
