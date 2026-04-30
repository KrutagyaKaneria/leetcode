class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int x = 0;
        int y = 0;
        for(char i : moves){
            if(i == 'L')x++;
            else if(i == 'R')x--;
            else if(i == 'U')y++;
            else if(i == 'D')y--;
        }
        if(x == 0 && y==0){
            return true;
        }else{
            return false;
        }    
    }
};