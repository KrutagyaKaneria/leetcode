// class Solution {
// public:
//     int maxScoreSightseeingPair(vector<int>& values) {
//         int max = 0;
//         int size = values.size();
//         for(int i=0;i<=size-1;i++){
//             for(int j=i+1;j<=size-1;j++){
//             int score = values[i] + values[j] + i - j;
//             if(score > max){
//                 max=score;
//             }
//         }    
//     }
//     return max;
//     }
// };

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int best = values[0]; // best candidate for (values[i] + i)
        int ans = 0;

        for(int j = 1; j < values.size(); j++){
            ans = max(ans, best + values[j] - j); // score with best i
            best = max(best, values[j] + j);     // update best i
        }

        return ans;
    }
};
