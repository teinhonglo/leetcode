class Solution {
public:
    bool isPerfectSquare(int num) {
        // corner case
        if(num == 0) return false;
        else if(num == 1) return true;
        // preparation
        int left = 0, right = num;
        bool is_perfect = false;
        
        while(left <= right){
            int mid = (left + right) / 2;
            int div = num / mid;
            // binary search
            if(div == mid && num % mid == 0){
                is_perfect = true;
                break;
            }else if(div < mid){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return is_perfect;
        
    }
};
