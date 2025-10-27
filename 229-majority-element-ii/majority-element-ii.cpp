class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> freq;
        vector<int> arr;
        int n = nums.size();
        int expres=n/3;
        
        for(int a : nums){
            freq[a]++;
        }

        for(auto c:freq){
            if(c.second>expres){
                arr.push_back(c.first);
            }
        }
        return arr;
    }
};