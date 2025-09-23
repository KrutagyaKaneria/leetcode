class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> freq;
        int max = 0;
        int sum = 0;

        for(int c : nums){
            freq[c]++;
            if(freq[c] > max){
                max = freq[c];
            }
        }
        for(auto p : freq){
            if(p.second == max){
                sum+=max;
            }
        }
        return sum;
    }
};