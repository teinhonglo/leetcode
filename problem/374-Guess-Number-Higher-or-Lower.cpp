// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long l = 1, r = n, mid = 0;
        bool is_match = false;
        
        while(l<=r && !is_match){
            mid = (l + r) / 2;
            switch(guess(mid)){
                case -1:
                    // My number is lower
                    r = mid - 1;
                    break;
                case 1:
                    // My number is higher
                    l = mid + 1;
                    break;
                case 0:
                    // Congrats! You got it!
                    is_match = true;
                    break;
                default:
                    break;
            }   
        }
        return mid;
    }
};
