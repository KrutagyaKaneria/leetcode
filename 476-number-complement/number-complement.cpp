class Solution {
public:
    int findComplement(int num) {
        int temp=1;
        while(temp<num){
            temp=temp*2+1;
        }
        return num^temp;
    }
};