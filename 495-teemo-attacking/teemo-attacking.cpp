class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int cnt = 0;
        int n = timeSeries.size();
        for (int i = 0; i < n - 1; i++) {
        cnt = cnt + min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        cnt= cnt + duration;
        return cnt;
    }
};