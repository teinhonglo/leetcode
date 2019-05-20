class Solution {
public:
    int fib(int N) {
        if(N == 0) return 0;
        else if(N == 1) return 1;
        
        int f0 = 0, f1= 1;
        int fib = f0 + f1;
        
        for(int i = 2; i <= N; i++){
            fib = f0 + f1;
            f0 = f1;
            f1 = fib;
        }
        return fib;
    }
};
