class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int island_per = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    if(i == 0) island_per++;
                    else if(grid[i-1][j] == 0) island_per++;
                    
                    if(i == grid.size() -1) island_per++;
                    else if(grid[i+1][j] == 0) island_per++;
                    
                    if(j == 0) island_per++;
                    else if(grid[i][j-1] == 0) island_per++;
                    
                    if(j == grid[i].size() -1)  island_per++;
                    else if(grid[i][j+1] == 0) island_per++;
                    
                }else{
                    continue;
                }
            }
        }
        return island_per;
    }
};
