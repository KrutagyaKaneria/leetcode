class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int n = operations.size();
        vector<long long> lengths(n + 1);
        lengths[0] = 1; // Initial word: "a"

        // Step 1: Precompute length of string after each operation
        for (int i = 0; i < n; ++i) {
            if (operations[i] == 0) {
                lengths[i + 1] = lengths[i] * 2;
            } else {
                lengths[i + 1] = lengths[i] * 2;
            }
            // Prevent overflow beyond 1e14
            lengths[i + 1] = min(lengths[i + 1], (long long)1e14 + 1);
        }

        int shiftCount = 0;

        // Step 2: Walk backwards from the last operation
        for (int i = n - 1; i >= 0; --i) {
            long long half = lengths[i];
            if (k > half) {
                k -= half;
                if (operations[i] == 1) {
                    shiftCount++;
                }
            }
        }

        // Step 3: Apply shifts to 'a'
        char result = 'a' + shiftCount;
        if (result > 'z') {
            result = 'a' + (result - 'z' - 1);
        }

        return result;
    }
};
