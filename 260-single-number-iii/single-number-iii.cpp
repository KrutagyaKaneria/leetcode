class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int flag = 1;  
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && nums[i] == nums[j]) {
                    flag = 0;  
                    break;
                }
            }
            if (flag == 1) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
