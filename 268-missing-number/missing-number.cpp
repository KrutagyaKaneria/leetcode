class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectation = n* (n+1)/2;
        int actualsize = 0;
        for(int i=0;i<n;i++){
            actualsize += nums[i];
        }
        return expectation-actualsize;
    }
};