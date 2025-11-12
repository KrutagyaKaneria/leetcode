class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(); // size of the given array
    map<int, int> mpp;  // ✅ specify key and value types
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // base case
    for (int i = 0; i < n; i++) {
        preSum += nums[i];

        int remove = preSum - k;

        cnt += mpp[remove];

        mpp[preSum]++;
    }

    return cnt;
    }
};