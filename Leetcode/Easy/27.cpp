class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ctr = 0;
        int size = nums.size();

        for (auto a: nums) {
            if (a != val) {
                nums[ctr++] = a;
            }
        }
        return ctr;
    }
};