class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length()!=t.length()){
        return false;
    }
    map<char,int> freq;

    for(char a : s){
        freq[a]++;
    }

    for(char a : t){
        freq[a]--;
        if(freq[a] < 0) return false;
    }
    return true;
    }
};


