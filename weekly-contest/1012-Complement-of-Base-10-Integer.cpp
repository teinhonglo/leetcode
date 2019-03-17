class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0) return 1;
        int comp = 0;
        int digit = 1;
        while(N > 0){
            if(N % 2 == 0)
                comp += 1 * digit;
            digit *=2;
            N /= 2;
        }
        return comp;
    }
};
