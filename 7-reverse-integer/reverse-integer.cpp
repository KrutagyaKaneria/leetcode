#include <iostream>
#include <limits.h> 

class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        while (x != 0) {
            int digit = x % 10; 
            reversed = reversed * 10 + digit; 
            x /= 10;  
            if (reversed > INT_MAX || reversed < INT_MIN) {
                return 0;
            }
        }
        return static_cast<int>(reversed);
    }
};
