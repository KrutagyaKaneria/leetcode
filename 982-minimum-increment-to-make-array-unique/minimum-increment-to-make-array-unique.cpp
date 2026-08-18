class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0; 
        int moves = 0; 

        for (int num : nums) {
            if(i > num){
                i = i;
            }else{
                i = num;
            }
            moves += i - num;
            i++; 
        }
        return moves;
    }
};