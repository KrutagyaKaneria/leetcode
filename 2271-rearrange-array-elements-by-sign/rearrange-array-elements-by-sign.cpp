class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        // Step 1: Separate positives and negatives
        for (int x : nums) {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        int n = nums.size();
        vector<int> ans(n);
        int i = 0, j = 0, k = 0;

        // Step 2: Alternate placing positive and negative numbers
        while (i < pos.size() && j < neg.size()) {
            ans[k++] = pos[i++];
            ans[k++] = neg[j++];
        }

        return ans;
    }
};
