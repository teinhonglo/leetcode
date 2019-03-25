class Solution {
public:
    int findComplement(int num) {
        // convert int to complement bin
        long int_c = 0;
        long digit = 1;
        while(num){
            if(num %2 == 0){
                int_c += 1 * digit;
            }
            num /= 2;
            digit *= 2;
        }
        return int_c;
    }
};
