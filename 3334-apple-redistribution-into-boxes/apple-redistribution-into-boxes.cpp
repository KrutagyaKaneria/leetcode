class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n1 = apple.size();
        int n2 = capacity.size();
        int total_num_of_Apple = 0;
        int result = 0;
        for(int i=0;i<n1;i++){
            total_num_of_Apple += apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(int j=0;j<n2;j++){
            total_num_of_Apple -= capacity[j];
            result++;
            if(total_num_of_Apple<=0){
               break;
            }
        }
        return result;
    }
};