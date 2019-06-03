class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(!intervals.size() || intervals.size() == 1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mg_vec;
        mg_vec.push_back({intervals[0][0],intervals[0][1]});
        
        for(int i = 1; i < intervals.size(); i++){
            int start = intervals[i][0], end = intervals[i][1];
            if(start <= mg_vec[mg_vec.size()-1][1] && 
               end > mg_vec[mg_vec.size()-1][1]){
                // merge
                mg_vec[mg_vec.size()-1][1] = end;
            }else if(start > mg_vec[mg_vec.size()-1][1]){
                // split
                mg_vec.push_back({start, end});
            }
        }
        return mg_vec;
            
    }
};
