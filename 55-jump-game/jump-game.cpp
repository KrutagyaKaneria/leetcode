class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int x = n - 1;
        
        for (int i = n-1; i >= 0; i--) {
            int len = x-i;
            if (nums[i] >= len) {
                x=i;
            }
        }
        return x==0;
    }
};