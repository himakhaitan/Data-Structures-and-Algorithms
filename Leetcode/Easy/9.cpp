class Solution
{
public:
    bool isPalindrome(long long int x)
    {
        if (x < 0)
            return false;

        long long int reverse = 0;
        long long int temp = x;

        while (temp > 0)
        {
            int digit = temp % 10;
            temp = (temp - digit) / 10;
            reverse = reverse * 10 + digit;
        }

        if (reverse == x)
            return true;

        return false;
    }
};