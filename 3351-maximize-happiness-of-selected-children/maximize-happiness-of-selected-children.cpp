class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum = 0;
        long long  dec = 0;
        for(int i=0;i<k;i++){
            long long val = happiness[i] - dec;
            if(val < 0){
                val=0;
            }
            sum = sum + val;
            dec++;
        }
        return sum;
    }
};