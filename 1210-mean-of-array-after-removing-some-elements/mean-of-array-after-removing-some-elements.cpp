class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int removeCount = n * 0.05;  

        double sum = 0;
        for (int i = removeCount; i < n - removeCount; i++) {
            sum += arr[i];
        }

        double mean = sum / (n - 2 * removeCount);
        return mean;
    }
};
