class Solution {
public:
    int commonFactors(int a, int b) {
        int min;
        if(a>b){
            min=b;
        }
        min=a;
        int cnt =0;
        for(int i=1;i<=min;i++){
            if(a%i==0 && b%i==0){
                cnt++;
            }
        }
        return cnt;
    }
};