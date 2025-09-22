class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> freq;

        for(auto &s : arr){
            freq[s]++;
        }
        int count =0;
        for(auto &s: arr){
            if(freq[s] == 1){
                count++;
                if(count == k){
                    return s;
                }
            }
        }

        return "";
    }
};