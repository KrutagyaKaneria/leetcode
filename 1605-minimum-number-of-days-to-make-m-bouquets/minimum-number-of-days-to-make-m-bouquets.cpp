class Solution {
public:
    bool possible(vector<int>& bloomDay, int k, int day, int m) {
        int cnt = 0;
        int n = bloomDay.size();
        int flowerbloom = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= day)
                cnt++;
            else {
                flowerbloom += (cnt / k);
                cnt = 0;
            }
        }
        flowerbloom += (cnt / k);
        return flowerbloom >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        // Edge case: not enough flowers to make m bouquets of k size
        if ((long long)m * k > bloomDay.size())
            return -1;

        // Finding the actual range of days
        int mini = INT_MAX, maxi = INT_MIN;
        for (int val : bloomDay) {
            mini = min(mini, val);
            maxi = max(maxi, val);
        }

        // Search space is between the earliest and latest bloom day
        int low = mini, high = maxi;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, k, mid, m)) {
                ans = mid; // This day works, try to find a smaller one
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low; // After the loop, low will be the smallest valid day
    }
};