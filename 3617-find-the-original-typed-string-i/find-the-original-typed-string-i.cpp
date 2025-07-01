class Solution {
public:
    int possibleStringCount(string& word) {
        int totalChoices = 0;
        int groupCount = 0;
        int n = word.length();

        for (int i = 0; i < n; ) {
            int count = 1;
            while (i + count < n && word[i + count] == word[i]) {
                ++count;
            }
            totalChoices += count;
            ++groupCount;
            i += count;
        }

        return totalChoices - groupCount + 1;
    }
};

