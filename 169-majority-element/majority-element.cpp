class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int n = nums.size();
        int expres = n/2;
        for(int a:nums){
            freq[a]++;
        }

        for(auto c:freq){
            if(c.second > expres){
                return c.first;
            }
        }
        return -1;

    }
};