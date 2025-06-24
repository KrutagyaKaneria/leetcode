class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Index for placing non-val elements

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k++] = nums[i];  // Move non-val element forward
            }
        }

        return k;  // Number of elements not equal to val
    }
};
