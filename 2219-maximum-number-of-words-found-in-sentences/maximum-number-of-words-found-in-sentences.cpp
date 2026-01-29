class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int n = sentences.size();
       int words = 1;
       int cnt = 0; 

       for(int i = 0; i < n; i++){
        for(char ch : sentences[i]){
            if(ch == ' '){
             words++;
            }
        }
        cnt = max(cnt,words);
        words = 1;
       } 
       return cnt;
    }
};