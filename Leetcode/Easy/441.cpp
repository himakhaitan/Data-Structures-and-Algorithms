// O(logn)

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long int low = 1;
        long long int high = n;

        long long row;

        while (low <= high)
        {
            long long int mid = high - (high - low) / 2;
            long long int fullCoins = mid * (mid + 1) / 2;

            if (fullCoins > n)
            {
                high = mid - 1;
            }
            else if (fullCoins < n)
            {
                row = mid;
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        return row;
    }
};

// O (lg(n/2))

class Solution
{
public:
    int arrangeCoins(int n)
    {

        if (n == 1 || n == 2)
        {
            return 1;
        }

        if (n == 3)
        {
            return 2;
        }

        long long int low = 1;
        long long int high = n / 2;

        long long row;

        while (low <= high)
        {
            long long int mid = high - (high - low) / 2;
            long long int fullCoins = mid * (mid + 1) / 2;

            if (fullCoins > n)
            {
                high = mid - 1;
            }
            else if (fullCoins < n)
            {
                row = mid;
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        return row;
    }
};