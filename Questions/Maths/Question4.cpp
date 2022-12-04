// Calculate the GCD of two numbers

#include <iostream>

using namespace std;

int main()
{
    // Taking Input
    int a, b;
    cout << "Enter the numbers to calculate the GCD(a,b)" << endl;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    // Finding GCD

    while (a != 0 && b != 0)
    {
        if (b > a)
            swap(b, a);

        a = a % b;
    }

    // Output
    cout << "Answer: " << max(a, b) << endl;

    return 0;
}