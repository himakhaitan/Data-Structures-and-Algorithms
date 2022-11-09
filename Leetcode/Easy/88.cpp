class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int ctr = m + n - 1;
        m = m - 1;
        n = n - 1;
        while (m >= 0 && n >= 0)
        {
            if (nums2[n] > nums1[m])
            {
                nums1[ctr--] = nums2[n--];
            }
            else
            {
                nums1[ctr--] = nums1[m--];
            }
        }

        while (n >= 0)
        {
            nums1[ctr--] = nums2[n--];
        }

        while (m >= 0)
        {
            nums1[ctr--] = nums1[m--];
        }
    }
};