class Solution {
public:
    int singleNumber(vector<int>& nums){
        map<int, int> freq;
        int output = 0;

        for (int x : nums) {
            freq[x]++;
        }

        for (auto x : freq) {
            if (x.second == 1) {
                output = x.first;
            }
        }
        return output;
    }
};
