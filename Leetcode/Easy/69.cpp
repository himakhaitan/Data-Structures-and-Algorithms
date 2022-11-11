class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 1;
        int high = x;

        long mid = high - (high - low) / 2;

        while (low <= high)
        {

            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

            mid = high - (high - low) / 2;
        }

        return low - 1;
    }
};