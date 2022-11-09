class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;

        int mid = high - (high - low) / 2;

        while (low <= high)
        {
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            mid = high - (high - low) / 2;
        }

        return low;
    }
};