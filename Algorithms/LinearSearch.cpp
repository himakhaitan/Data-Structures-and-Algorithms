// Linear Search Algorithm. Searches one by one

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &arr, int key)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int noOfElements;

    cout << "Enter the no of elements to enter: " << endl;
    cin >> noOfElements;

    vector<int> arr(noOfElements, 0);

    for (int i = 0; i < noOfElements; i++)
    {
        cout << i << " : ";
        cin >> arr[i];
    }
    int key;

    cout << "Enter the elements to Search: ";
    cin >> key;

    int ans = linearSearch(arr, key);
    if (ans == -1) {
        cout << "Match Not Found!" << endl;
    } else {
        cout << "Key (" << key << ") found at index " << ans << endl; 
    }

    return 0;
}