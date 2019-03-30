class Solution {
public:
    vector<int> constructRectangle(int area) {
        int max_w = sqrt(area * 1.0);
        vector<int> rect{0, 0};
        int i = max_w;
        for(; i > 0; i--){
            if(area % i == 0){
                rect[0] = area / i;
                rect[1] = i;
                break;
            }
        }
        return rect;
    }
};
