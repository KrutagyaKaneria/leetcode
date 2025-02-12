#include <string>
#include <numeric> // For std::gcd in C++17 and later

class Solution {
public:
    std::string gcdOfStrings(const std::string& str1, const std::string& str2) {
        // Check if concatenation in both orders is the same
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        // Find the GCD of the lengths of str1 and str2
        int gcdLength = std::gcd(str1.size(), str2.size());
        
        // The GCD string would be the prefix of str1 up to gcdLength
        return str1.substr(0, gcdLength);
    }
};
