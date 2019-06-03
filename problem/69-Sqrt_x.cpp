class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) return x;
        long left = 0, right = x / 2;
        int ret = 0;
        // binary search in half-range
        while(left <= right){
            long mid = (left + right) / 2;
            long mid_pow = mid * mid;
            if(mid_pow == x){
                ret = mid;
                break;
            }else if(mid_pow < x){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        // if couldn't find it, return right value
        if(ret == 0) ret = right;
        // else return find value
        return ret;
    }
};
