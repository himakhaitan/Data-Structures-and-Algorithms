// O(n) solution
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {

        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] > target)
            {
                return letters[i];
            }
        }

        return letters[0];
    }
};

// O(lgn) Solution using Binary Search

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();

        if (letters[size - 1] <= target) {
            return letters[0];
        }

        int low = 0;
        int high = size - 1;

        int mid = high - (high - low)/2;
        char small=letters[size-1];
        while (low <= high) {

            if(letters[mid]>target)
            {
                if(small>letters[mid])
                    small=letters[mid];
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid = high - (high - low)/2;
        }

        return small;

    }
};