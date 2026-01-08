class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int, greater<int>> st(nums.begin(), nums.end());

        if (st.size() < 3)
            return *st.begin();
        auto it = st.begin();
        advance(it, 2);
        return *it;
    }
};


