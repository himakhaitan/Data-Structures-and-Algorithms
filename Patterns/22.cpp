/*

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/


#include <iostream>

using namespace std;

void print_pattern(int n) {
    
    int counter = 0;
    
    for (int i = 0; i < (2 * n - 1); i++) {
        for (int j = 0; j < (2 * n - 1); j++) {
            int left = j;
            int right = (2 * n - 2) - j;
            int top = i;
            int bottom = (2 * n - 2) - i;

            cout << n - min(min(left, right), min(top, bottom)) << " ";
        }
        cout << endl;
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