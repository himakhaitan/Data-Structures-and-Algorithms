#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;
    int mid = high - (high - low) / 2;

    while (low <= high)
    {
        mid = high - (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] > key)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int noOfElements;

    cout << "Enter the number of elements to enter: ";
    cin >> noOfElements;

    vector<int> arr(noOfElements, 0);

    for (int i = 0; i < noOfElements; i++)
    {
        cout << i << " : ";
        cin >> arr[i];
    }

    // Sorting Array
    sort(arr.begin(), arr.end());

    // Taking Search Key!
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int ans = binarySearch(arr, key);

    if (ans == -1)
        cout << "Element not Found!" << endl;
    else
        cout << "Element found at position: " << ans << endl;

    return 0;
}