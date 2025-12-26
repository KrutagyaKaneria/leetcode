class Solution {
public:
    int bestClosingTime(string customers) {
        int score = 0;
        int minScore = 0;
        int best = 0;

        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') score--;  
            else score++;                      

            if (score < minScore) {
                minScore = score;
                best = i + 1;
            }
        }
        return best;
    }
};
