class Solution {
public:
    int reverseDegree(string s) {
        int cnt=0; //To calculate the total sum 

        //we have 1-indexed based string 
        for(int i=0;i<s.size();i++){
            int n=26-(s[i]-'a');
            cnt+=(n*(i+1));
        }

        return cnt;
        
    }
};