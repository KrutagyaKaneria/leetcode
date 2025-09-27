    class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            if (n == 0 || n == 1) return;

            k = k % n;
            cout << "Effective k = " << k << endl;
            if (k == 0) return;

            reverse(nums.begin(), nums.end());         // reverse whole array
            reverse(nums.begin(), nums.begin() + k);   // reverse first k
            reverse(nums.begin() + k, nums.end());     // reverse rest
        }
    };
