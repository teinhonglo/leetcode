class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix.size()==1){
            return matrix[0][0];
        }
        // record each numbers using priority queue (auto sort)
        priority_queue<int> p;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix.size(); j++){
                p.push(matrix[i][j]);
            }
        }
        // calculate reserve number
        int res = matrix.size() * matrix.size() - k;
        // pop irrelvant number
        while(res--) p.pop();
        return p.top();
    }
};
