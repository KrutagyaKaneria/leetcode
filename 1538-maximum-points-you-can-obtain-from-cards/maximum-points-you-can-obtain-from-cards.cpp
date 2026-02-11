class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        int leftSum = 0;
        for(int i = 0; i < k; i++) {
            leftSum += cardPoints[i];
        }
        
        int maxSum = leftSum;
        int rightSum = 0;
        
        for(int i = 1; i <= k; i++) {
            leftSum -= cardPoints[k - i];
            rightSum += cardPoints[n - i];
            maxSum = max(maxSum, leftSum + rightSum);
        }
        
        return maxSum;
    }
};
