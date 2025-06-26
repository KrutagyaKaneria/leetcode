class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;  // sqrt(0) = 0, sqrt(1) = 1

        int left = 1, right = x / 2, ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;

            if (sq == x) return mid;
            if (sq < x) {
                ans = mid;      // Store the best candidate so far
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
