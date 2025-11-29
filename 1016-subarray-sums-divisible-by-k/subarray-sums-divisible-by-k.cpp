class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
            unordered_map<int, int> freq;
            freq[0] = 1; // remainder 0 seen once

            int prefix = 0, count = 0;

            for (int x : nums) {
                prefix += x;
                int r = (prefix % k + k) % k;

                if (freq.count(r))
                    count += freq[r];

                freq[r]++;
            }
            return count;
        }
};