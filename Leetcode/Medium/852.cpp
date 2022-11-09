class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;

        int mid = high - (high - low) / 2;

        while (low <= high)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }

            mid = high - (high - low) / 2;
        }

        return -1;
    }
};