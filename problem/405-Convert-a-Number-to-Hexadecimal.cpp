#include <limits>

class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        vector<string>hex_map{"0", "1", "2", "3", "4", "5", "6", "7", \
                              "8", "9", "a", "b", "c", "d", "e", "f"};
        string hex_str = "";
        long n;
        n = (num < 0) ? pow(2,32) + num : num;
        
        while(n > 0){
            hex_str = hex_map[n % 16] + hex_str;
            n /= 16;
        }
        return hex_str;
    }
};
