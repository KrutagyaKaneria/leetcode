class Solution {
public:
    int specialArray(vector<int>& nums) {
        int output = -1;
        int n = nums.size();
        for(int x = 0; x <= n; x++){  
            int cnt = 0;               
            for(int j = 0; j < n; j++){
                if(nums[j] >= x){
                    cnt++;
                }
            }
            if(cnt == x){
                output = x;            
                break;                 
            }
        }
        return output;
    }
};
