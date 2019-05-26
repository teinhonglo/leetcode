class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // sort original vector (non-decreasing)
        vector<int>heights_sort;
        heights_sort.assign(heights.begin(), heights.end());
        sort(heights_sort.begin(), heights_sort.end());
        int num_moves = 0;
        // check number of the differents between sorted heights and original heights
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != heights_sort[i]) num_moves++;
        }
        return num_moves;
    }
};
