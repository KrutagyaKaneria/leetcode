class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mp;
        int cnt = 0;

        for(char x : jewels){
            mp.insert(x);
        }

        for(char x : stones){
            if(mp.count(x)){
                cnt++;
        }
    }
    return cnt;
    }
};