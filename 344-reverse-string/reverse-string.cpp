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


// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int n = s.size();
//         for (int i = 0; i < n / 2; ++i) {
//             swap(s[i], s[n - i - 1]);
//         }
//     }
// };

class Solution {
public:
    void reverseString(vector<char>& s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};


    
