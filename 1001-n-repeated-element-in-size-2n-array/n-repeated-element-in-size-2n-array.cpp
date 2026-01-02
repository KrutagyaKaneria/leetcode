class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> mp;

        for(int x:nums){
            mp[x]++;
        }

        for(auto x: mp){
            if(x.second*2 == n){
                return x.first;
            }
        }
        return -1;
    }
};