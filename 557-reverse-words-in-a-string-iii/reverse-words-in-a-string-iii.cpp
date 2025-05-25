class Solution {
public:
    string reverseWords(string s) {
        string result = "", word = "";
        for (char c : s) {
            if (c == ' ') {
                reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            } else {
                word += c;
            }
        }
        // Handle the last word
        reverse(word.begin(), word.end());
        result += word;
        return result;
    }
};
