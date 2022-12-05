// Reverse Integer

// INT_MAX is equal 2147483647. INT_MIN is equal  -2147483648

int reverse(int num)
{
    int rev = 0;

    while (num != 0)
    {
        int rem = num % 10;
        num /= 10;

        if (rev > INT_MAX / 10 || rev == INT_MAX / 10 && rem > 7)
        {
            return 0;
        }

        if (rev < INT_MIN / 10 || rev == INT_MIN / 10 && rem < -8)
        {
            return 0;
        }

        rev = rev * 10 + rem;
    }

    return rev;
}
