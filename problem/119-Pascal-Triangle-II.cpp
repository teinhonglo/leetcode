class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev_row;
        // simple implement to pascal's triangle
        for(int i = 0; i < rowIndex+1; i++){
            vector<int> cur_row;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    // edge
                    cur_row.push_back(1);
                }else{
                    // middle
                    cur_row.push_back(prev_row[j-1] + prev_row[j]);
                }
            }
            prev_row = cur_row;
        }
        return prev_row;
    }
};
