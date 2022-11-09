class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> ans(2, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) == mp.end())
            {
                mp[target - nums[i]] = i;
            }
            else
            {
                ans[0] = i;
                ans[1] = mp[nums[i]];
                return ans;
            }
        }

        return ans;
    }
};