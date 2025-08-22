class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false;

        int i=0;
        bool increasing = false;
        bool decreasing = false;

    
        for (;i + 1 < arr.size(); i++) {
            if (arr[i] < arr[i + 1]) {
                increasing = true;
            } else {
                break;
            }
        }

     
        if (i == 0 || i == arr.size() - 1) return false;

     
        for (; i + 1 < arr.size(); i++) {
            if (arr[i] > arr[i + 1]) {
                decreasing = true;
            } else {
                return false;
            }
        }

        return increasing && decreasing;
    }
};
