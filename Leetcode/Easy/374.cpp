// Guess is a non disclosed function.

class Solution
{
public:
    int guessNumber(int n)
    {
        int low = 0;
        int high = n;

        int mid = high - (high - low) / 2;

        while (low <= high)
        {
            int pick = guess(mid);

            if (pick == 0)
            {
                return mid;
            }
            else if (pick == -1)
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