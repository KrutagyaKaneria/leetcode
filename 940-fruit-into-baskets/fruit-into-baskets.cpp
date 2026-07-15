class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int max_fruits = 0;
        unordered_map<int, int> basket;
        
        for (int j = 0; j < fruits.size(); ++j) {
            basket[fruits[j]]++;
            
            while (basket.size() > 2) {
                basket[fruits[i]]--; 
                
                if (basket[fruits[i]] == 0) {
                    basket.erase(fruits[i]); 
                }
                i++; 
            }
            
            max_fruits = max(max_fruits, j - i + 1);
        }
        
        return max_fruits;
    }
};
