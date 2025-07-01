class Solution {
public:
    int possibleStringCount(string word) {
        int groupCount = 0, totalChoices = 0;
        int i = 0, n = word.size();

        while (i < n) {
            int j = i;
            while (j < n && word[j] == word[i]) {
                ++j;
            }
            int len = j - i;
            totalChoices += len;
            groupCount++;
            i = j;
        }

        return totalChoices - groupCount + 1;
    }
};
