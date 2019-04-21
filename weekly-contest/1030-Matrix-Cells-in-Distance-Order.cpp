class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return a[2] <= b[2];
    }
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> ret(R*C, vector<int>(3,0));
        // iterative value in matrix (R, C)
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                // record position
                ret[i*C + j][0] = i;
                ret[i*C + j][1] = j;
                // record cost
                ret[i*C + j][2] = abs(i - r0) + abs(j - c0);
            }
        }
        // sorted by ret[2]
        sort(ret.begin(), ret.end(), comp);
        // pop redauncy value
        for(vector<int>&r:ret){
            r.pop_back();
        }
        
        return ret;
    }
};
