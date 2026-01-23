// 1) prifix product
// 2) suffix product
// 3) prefix*suffix

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        int prifix = 1;
        for(int i=0;i<n;i++){
            ans[i] = prifix;
            prifix = prifix * nums[i];
        }

        int suffix = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] = suffix * ans[i];
            suffix = suffix * nums[i];
        }

        return ans;
    };
};