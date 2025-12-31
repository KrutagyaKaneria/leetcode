class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int m = nums.size();
        vector<int> output(1001, 0);

        for (auto& arr : nums) {
            for (int x : arr) {
                output[x]++;
            }
        }

            vector<int> ans;

            for (int x = 1; x <= 1000; x++) {
                if (output[x] == m) {
                    ans.push_back(x);
                }
            }
            return ans;
        }
    };