// Sieve of Eratosthenes

/*
    Find the number of primes in the given range.
*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter the Upper Bound of the range: ";
    cin >> number;

    // Defining Boolean Array
    bool isPrime[number + 1];

    // Initialising Array
    for (int i = 0; i < number + 1; i++)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= number; i++)
        for (int j = 2 * i; j <= number; j += i)
            isPrime[j] = false;

    int counter = 0;
    // Counting True in Boolean Array
    for (int i = 0; i < number + 1; i++)
        if (isPrime[i])
            counter++;

    // Output
    cout << "No of Primes in the range [0, " << number << "]: " << counter << endl;
    return 0;
}