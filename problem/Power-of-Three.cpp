class Solution {
public:
    bool isPowerOfThree(int n) {
        bool isPower3 = false;
        while( n > 0){
            if(n == 1){ 
                isPower3 = true;
                break;
            }
            if(n % 3 == 0){
                n /= 3;
            }else{
                break;
            }
        }
        return isPower3;
    }
};