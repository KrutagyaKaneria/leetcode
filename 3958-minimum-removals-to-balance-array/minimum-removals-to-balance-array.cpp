class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 0;
        int maxlen = 1;

        for (int i = 0; i < n; i++) {
            while ((long long)nums[i] > (long long)nums[j] * k) {
                j++;
            }
            maxlen = max(maxlen, i - j + 1);
        }
        return n - maxlen;
    }
};
