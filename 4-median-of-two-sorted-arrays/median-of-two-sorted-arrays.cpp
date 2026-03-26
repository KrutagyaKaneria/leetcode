class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> total;

        // Merge arrays
        for(int i = 0; i < nums1.size(); i++) {
            total.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            total.push_back(nums2[i]);
        }

        // Sort the merged array
        sort(total.begin(), total.end());

        int n = total.size();

        // Find median
        if(n % 2 == 0) {
            return (total[n/2 - 1] + total[n/2]) / 2.0;
        } else {
            return total[n/2];
        }
    }
};