class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        int n = mat[0].size();
        
        // Prefix sum
        vector<vector<int>> pre(m+1, vector<int>(n+1,0));
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                pre[i][j] = mat[i-1][j-1]
                          + pre[i-1][j]
                          + pre[i][j-1]
                          - pre[i-1][j-1];
            }
        }
        
        int ans = 0;
        
        // Sliding window on size
        for(int k=1;k<=min(m,n);k++){
            bool found = false;
            
            for(int i=k;i<=m;i++){
                for(int j=k;j<=n;j++){
                    
                    int sum = pre[i][j]
                            - pre[i-k][j]
                            - pre[i][j-k]
                            + pre[i-k][j-k];
                    
                    if(sum <= threshold){
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            
            if(found) ans = k;
            else break; 
        }
        
        return ans;
    }
};
