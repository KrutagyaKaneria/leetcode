class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (heights[j] > heights[i]) {
                    int tempheight = heights[i];
                    heights[i] = heights[j];
                    heights[j] = tempheight;

                    string tempname = names[i];
                    names[i] = names[j];
                    names[j] = tempname;
                }
            }
        }

        return names;
    }
};
