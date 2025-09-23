class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int b = nums.back();
        while(a!=b){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        return a;
    }
};
