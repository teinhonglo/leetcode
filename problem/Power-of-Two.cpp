class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool isPower2 = false;
        while( n > 0){
            if(n == 1){ 
                isPower2 = true;
                break;
            }
            if(n % 2 == 0){
                n /= 2;
            }else{
                break;
            }
        }
        return isPower2;
    }
};