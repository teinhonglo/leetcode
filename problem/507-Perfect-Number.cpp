class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 0 || num == 1) return false;
        
        int acc = 1;
        for(int divisor = 2; divisor < sqrt(num); divisor++){
            if(num % divisor == 0){
                acc += (divisor + num / divisor);
            }
        }
        return (num == acc);
    }
};
