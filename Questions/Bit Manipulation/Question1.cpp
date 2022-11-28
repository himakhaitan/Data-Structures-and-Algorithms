// Find number of bits to change to convert a to b;

// a -> 10110 (22)
// b -> 11011 (27)

// Total no of bits changed to convert a to b is 3;

#include <iostream>

using namespace std;

int main()
{

    unsigned int a;
    unsigned int b;

    cout << "Enter the number: ";
    cin >> a;

    cout << "Enter the number to be converted to: ";
    cin >> b;

    unsigned int c = a ^ b;
    int counter = 0;

    while (c != 0)
    {
        c = c & (c - 1);
        counter++;
    }

    cout << "\n## No of bits that needs to be changed are: " << counter << endl;

    return 0;
}