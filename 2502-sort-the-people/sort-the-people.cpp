class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Pair heights with names
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }

        // Sort by height descending (no nested loops!)
        sort(people.rbegin(), people.rend());

        // Extract sorted names
        vector<string> result;
        for (auto& p : people) {
            result.push_back(p.second);
        }

        return result;
    }
};
