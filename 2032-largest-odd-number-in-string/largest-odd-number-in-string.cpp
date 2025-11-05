class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        // Traverse from rightmost digit to left
        for (int i = n - 1; i >= 0; i--) {
            int digit = num[i] - '0'; // convert char to int
            if (digit % 2 != 0) {     // check if odd
                return num.substr(0, i + 1); // return prefix substring
            }
        }

        // If no odd digit found
        return "";
    }
};
