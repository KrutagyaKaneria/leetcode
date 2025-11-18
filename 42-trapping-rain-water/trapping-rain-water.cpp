class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> left(size);
        vector<int> right(size);
        vector<int> out(size);

        left[0] = height[0];
        for (int i = 1; i < size; i++) {
            left[i] = max(height[i], left[i - 1]);
        }
        right[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            right[i] = max(height[i], right[i + 1]);
        }
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + min(left[i], right[i]) - height[i];
        }
        return sum;
    }
};