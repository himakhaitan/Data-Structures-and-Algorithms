// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;

        int mid = high - (high - low)/2;

        while (low <= high) {
            bool isBad = isBadVersion(mid);
            if (isBad) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            mid = high - (high - low)/2;
        }

        return low;
    }
};