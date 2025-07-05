class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for (int num : arr) {
            freq[num]++;
        }

        int result = -1;

        // Step 2: Check lucky numbers
        for (auto& [num, count] : freq) {
            if (num == count) {
                result = max(result, num);
            }
        }

        return result;
    }
};
