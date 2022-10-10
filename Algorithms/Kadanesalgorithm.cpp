// Used to find "Largest Sum Contiguous Subarray"

#include <iostream>
#include <vector>

using namespace std;

int kadensAlgo(vector<int> &arr)
{
    int n = arr.size();
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main()
{
    int noOfElements = 0;

    cout << "Enter the number of Elements to enter: ";
    cin >> noOfElements;

    vector<int> arr(noOfElements, 0);
    for (int i = 0; i < noOfElements; i++)
    {
        cout << i << " : ";
        cin >> arr[i];
    }

    int result = kadensAlgo(arr);
    cout << "Maximum Contiguous Sum of Sub Array: " << result << endl;

    return 0;
}