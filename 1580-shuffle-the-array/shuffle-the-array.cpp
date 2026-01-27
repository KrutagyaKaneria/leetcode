class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output;
        int i=0;
        int j=n;

        while(i<n){
            output.push_back(nums[i]);
            output.push_back(nums[j]);
            i++;
            j++;
        }
        return output;
    }
};