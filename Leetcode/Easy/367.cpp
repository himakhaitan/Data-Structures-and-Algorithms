class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int low = 1;
        int high = num;

        long mid = high - (high - low) / 2;

        while (low <= high)
        {
            if (mid * mid == num)
            {
                return true;
            }
            else if (mid * mid < num)
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