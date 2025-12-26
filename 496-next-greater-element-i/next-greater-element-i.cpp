class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i=0;i<n1;i++){
            int curr = nums1[i];
            int index = 0;
            for(int j=0;j<n2;j++){
                if(nums2[j]==curr){
                    index = j;
                    break;
                }
            }
            int value = -1;
            for(int k=index+1 ; k<n2 ;k++){
                if(nums2[k] > curr){
                    value = nums2[k];
                    break;
                }
            }
            ans.push_back(value);
        }
        return ans;
    }
};