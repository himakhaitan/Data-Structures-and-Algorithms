class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        if (n == 0 || m == 0)
        {
            return false;
        }

        int low = 0;
        int high = m * n - 1;
        int mid = high - (high - low) / 2;

        while (low <= high)
        {
            int element = matrix[mid / n][mid % n];

            if (element == target)
            {
                return true;
            }
            else if (element < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

            mid = high - (high - low) / 2;
        }

        return false;
    }
};