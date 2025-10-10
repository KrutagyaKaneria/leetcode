class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int i = 1;  
        int j = 0;   

        while (j < n) {
            if (nums[j] <= 0) {
                j++;
                continue;
            }
            if (nums[j] == i) {
                i++;
            } else if (nums[j] > i) {
                return i;
            }
            j++;
        }
        return i;
    }
};
