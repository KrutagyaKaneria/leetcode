class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int shift = 0;
        for(int i = 0; i < n; i ++){
            shift = (nums[i] + i) % n;
            if(shift < 0){
                result[i] = nums[shift+n];
            }else if(nums[i] == 0){
                result[i] = 0;
            }else{
                result[i] = nums[shift];
            }
        }
        return result;
    }
};