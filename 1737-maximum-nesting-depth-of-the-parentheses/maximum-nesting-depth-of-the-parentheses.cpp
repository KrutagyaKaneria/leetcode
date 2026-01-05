class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int max = 0;
        for (char c : s) {
            if (c == '(') {
                cnt++;
                if (max < cnt) {
                    max = cnt;
                }
            } else if (c == ')') {
                cnt--;
            }
        }
        return max;
    }
};