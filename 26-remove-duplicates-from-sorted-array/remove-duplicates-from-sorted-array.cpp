class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        int i = 1; 
        int j = 1; 

        while (i < n) { 
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                cnt++;
                j++; 
            }
            i++; 
        }
        return cnt;
    }
};
