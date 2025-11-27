class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int max_len = 0;
        int j = 0;

        for( int i=0;i<s.length();i++){
            char curr = s[i];
            if(map.find(curr) != map.end() && map[curr]>=j){
                j = map[curr] + 1;
            }
            map[curr] = i;
            max_len = max(max_len,i-j+1);
        }
        return max_len;
    }
};

