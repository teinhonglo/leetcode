class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        // simple implement to pascal's triangle
        for(int i = 0; i < numRows; i++){
            vector<int> cur_row;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    // edge
                    cur_row.push_back(1);
                }else{
                    // middle
                    cur_row.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
                }
            }
            pascal.push_back(cur_row);
        }
        return pascal;
    }
};
