class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size();
        int j = 0;

        for (int i = 0; i < size; i++)
        {
            if (nums[j] != nums[i])
            {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
    }
};