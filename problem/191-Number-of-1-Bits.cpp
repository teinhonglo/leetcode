class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num_ones = 0;
        while(n){
            if(n % 2){
                num_ones++;
            }
            n >>= 1;
        }
        return num_ones;
    }
};
