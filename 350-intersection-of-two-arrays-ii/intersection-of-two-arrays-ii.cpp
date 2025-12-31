class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 =  nums2.size();
        
        unordered_map<int,int> freq;
        vector<int> output;

        for(int x : nums1){
            freq[x]++;
        }

        for(int x: nums2){
            if(freq[x] > 0){
                output.push_back(x);
                freq[x]--;
            }
        }

        return output;
    }
};