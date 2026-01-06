class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> freq;

        for(char x : magazine){
            freq[x]++;
        }

        for(char x : ransomNote){
            freq[x]--;
            if(freq[x] < 0){      
                return false;
            }
        }
        return true;
    }
};
