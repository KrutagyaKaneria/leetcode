// class Solution {
// public:
//     void reverseString(vector<char>& s, int start = 0, int end = -1) {
// //         if (end == -1) {
// //             end = s.size() - 1;
// //         }
// //         if (start >= end) {
// //             return;
// //         }
// //         swap(s[start], s[end]);
// //         reverseString(s, start + 1, end - 1);
// //     }
// // };


class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();

        // Use a single loop to swap characters from both ends
        for (int i = 0; i < n / 2; ++i) {
            swap(s[i], s[n - i - 1]);
        }
    }
};



    
