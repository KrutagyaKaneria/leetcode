#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> freq;  // stores freq of (nums[i] - i)
        long long good = 0;  // count of good pairs
        long long n = nums.size();

        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;
            if (freq.find(key) != freq.end()) {
                good += freq[key];  // pairs with same (nums[i] - i) are good
            }
            freq[key]++;
        }

        long long total = n * (n - 1) / 2;  // total possible pairs
        return total - good;  
    }
};
