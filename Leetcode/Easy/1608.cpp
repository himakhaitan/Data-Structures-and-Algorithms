class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        int low = 1;
        int high = nums.size();

        int mid = high - (high - low) / 2;

        while (low <= high)
        {

            int count = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= mid)
                {
                    count++;
                }
            }

            if (count == mid)
            {
                return count;
            }
            else if (count < mid)
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