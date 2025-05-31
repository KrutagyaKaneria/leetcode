class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') i--;

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
