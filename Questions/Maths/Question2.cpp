// Check if the Number is a Palindrome

#include <iostream>

using namespace std;

int main()
{
    long long int number, temp;
    cout << "Enter the number: ";
    cin >> number;

    temp = number;

    long long int reverse = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        temp = (temp - digit) / 10;

        reverse = reverse * 10 + digit;
    }

    if (reverse == number)
        cout << "Number is a Palindrome." << endl;
    else
        cout << "Number is not a Palindrome." << endl;

    return 0;
}