class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2 * n);  // increase size
        for (int i = 0; i < n; i++) {
            nums[i + n] = nums[i];  // put copy at the end
        }
        return nums;  // nums is now 2n long
    }
};
