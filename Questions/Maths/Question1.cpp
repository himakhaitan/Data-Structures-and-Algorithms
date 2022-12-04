// Find the Number of Trailing zeros in a Factorial

#include <iostream>

using namespace std;

int main()
{

    long long int num;
    cout << "Enter the Number: ";

    cin >> num;

    // Finding Trailing Zeros
    long long int divisor = 5;
    int counter = 0;
    while (divisor <= num)
    {
        counter += (num / divisor);
        divisor *= 5;
    }

    cout << "Number of Trailing Zeros: " << counter << endl;

    return 0;
}