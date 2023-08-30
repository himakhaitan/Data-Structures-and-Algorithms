// Fibonacci Series using Dynamic Programming

// Recursion + Memoization

#include <iostream>
#include <vector>

using namespace std;


// Recursion + Memoization
int fibonacci(int n, vector<int> &arr) {

    if (n == 1 || n == 0) {
        return n;
    }

    if (arr[n] != -1) {
        return arr[n];
    }

    arr[n] = fibonacci(n - 1, arr) + fibonacci(n - 2, arr);

    return arr[n];
}


// Tabulation Method
int tabulation(int n, vector<int> &dp) {

    for (int i = 2; i < n + 1; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];

}

int main() {

    int n;
    cout << "Number of Elements to Print: ";
    cin >> n;
    vector <int> arr(n+1, -1);
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i, arr) << endl;
    }
    cout << "By Tabulation: ";
    vector<int> arr2 (n+1, -1);
    arr2[1] = 1;
    arr2[0] = 0;
    cout << tabulation(n, arr2) << endl;
    return 0;
}