class Solution {
public:
    bool isUgly(int num) {
        bool is_ugly = true;
        
        while(num){
            if(num % 2 == 0){
                num /= 2;
                continue;
            }
            if(num % 3 == 0){
                num /= 3;
                continue;
            }
            if(num % 5 == 0){
                num /= 5;
                continue;
            }
            break;
        }
        is_ugly = (num == 1);
        
        return is_ugly;
    }
};
