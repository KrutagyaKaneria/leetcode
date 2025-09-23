class Solution {
public:
    int smallestEvenMultiple(int n) {
       int a = 2;
       int b = n;
       int num1 = a;
       int num2 = b;
       while(a!=b){
          if(a>b){
            a=a-b;
          }else{
            b=b-a;
          }
       }
       return (num1 * num2) / a;
    }
};