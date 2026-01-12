class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int time = 0;

        for(int i = 1; i < points.size(); i++) {

            int x = points[i-1][0];
            int y = points[i-1][1];
            int tx = points[i][0];
            int ty = points[i][1];

            while(x != tx || y != ty) {

                // diagonal move
                if(x != tx && y != ty) {
                    x += (tx > x ? 1 : -1);
                    y += (ty > y ? 1 : -1);
                }
                // horizontal
                else if(x != tx) {
                    x += (tx > x ? 1 : -1);
                }
                // vertical
                else {
                    y += (ty > y ? 1 : -1);
                }

                time++;
            }
        }
        return time;
    }
};
