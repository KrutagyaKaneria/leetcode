class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> freq(nums1.begin(),nums1.end());
        unordered_set<int> output;
    
        for(int x: nums2){
            if(freq.count(x)){
                output.insert(x);
            }
        }
        return vector<int> (output.begin(),output.end());
    }
};