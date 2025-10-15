class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string pre = "";
        int i=0;
        while(i<words.size()){
            string val = words[i];
            sort(val.begin(),val.end());
            if(val==pre){
                words.erase(words.begin()+i);
            }else{
                pre=val;
                i++;
            }
        }
        return words;
    }
};