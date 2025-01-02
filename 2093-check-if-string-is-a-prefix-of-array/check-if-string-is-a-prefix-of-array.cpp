class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int len = words.size();
        int sum =0;
        string ans = "";
        for(int i=0; i<len; i++){
            ans += words[i];
            if(s==ans){
                sum += 1;
                break;
            }
        }
    if(sum>0){
        return true;
    }
    else{
        return false;
    }
    }
};