class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> childrens;
        for(int c : candyType){
            childrens.insert(c);
        }

        int uniquechildren = childrens.size();
        int half = candyType.size() / 2;

        return min(uniquechildren,half);
    }
};