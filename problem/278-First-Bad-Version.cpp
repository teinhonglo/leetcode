// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 0, right = n;
        long bad_ver = n;
        while(left <= right){
            long mid = (left + right) / 2;
            if(isBadVersion(mid)){
                bad_ver = (mid < bad_ver)?mid:bad_ver;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return bad_ver;
    }
};
