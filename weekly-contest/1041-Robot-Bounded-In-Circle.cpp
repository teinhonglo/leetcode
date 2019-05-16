class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<vector<int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int d = 0;
        int x = 0, y = 0;
        int circle = 0;
        int most_circle = 4; // most four times
        
        while(circle < most_circle){
            for(char ins : instructions){
                if(ins == 'G'){
                    // go straight 1 unit
                    x += dir[d][0];
                    y += dir[d][1];
                }else if(ins == 'L'){
                    // turn left
                    d--;
                }else if(ins == 'R'){
                    // turn right
                    d++;
                }
                d = (d + 4) % 4;
            }
            if((x == 0) && (y == 0)) break;
            circle++;
        }
        
        return (x == 0) && (y == 0);
    }
};
