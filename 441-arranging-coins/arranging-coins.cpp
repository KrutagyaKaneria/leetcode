class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;

        for(int i=1; i <= n; i++){
            if(i > n){
                break;
            }else{
                cnt++;
            }
            n = n-i;
        }
        return cnt;
    }
};