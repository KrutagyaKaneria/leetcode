class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0); // if nums[i] is between 1 and 100
        int maxFreq = 0;
        int sum = 0;

        // count frequencies and track max
        for (int c : nums) {
            freq[c]++;
            if (freq[c] > maxFreq) {
                maxFreq = freq[c];
            }
        }

        // calculate sum
        for (int f : freq) {
            if (f == maxFreq) {
                sum += f;
            }
        }

        return sum;
    }
};
