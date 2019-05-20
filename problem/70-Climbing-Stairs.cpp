class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;
        }else if(n == 1){
            return 1;
        }else if(n == 2){
            return 2;
        }
        
        int a = 1, b = 2;
        for(int i = 3; i <= n; i++){
            int temp = a;
            a = b;
            b += temp;
        }
        
        return b;
    }
};
