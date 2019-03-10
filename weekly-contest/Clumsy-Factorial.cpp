#include <iostream>
// Weely contest: 2019/03/10
class Solution {
public:
    int _innClumsy(int N, bool is_first = true){
        // idea: I arranged the format in the order of time using plus operation.
        // for example, input = 10
        if(is_first){
            if(N > 3){
                // 10 * 9 / 8 + (recursive)
                return N * (N-1) / (N-2) + _innClumsy(N-3, false);
            }else if (N > 2){
                return N * (N-1) / (N-2);
            }else if (N > 1){
                return N * (N-1);
            }else{
                return N;
            }
        }else{
            if(N > 4){
                // 7 - 6 * 5 / 4 + (recursive)
                return N - (N-1) * (N-2) / (N-3) + _innClumsy(N-4, false);
            }else if (N > 3){
                return N - (N-1) * (N-2) / (N-3);
            }else if (N > 2){
                // 3 - 2 * 1
                return N - (N-1) * (N-2);
            }else if (N > 1){
                return N - (N-1);
            }else{
                return N;
            }
        }
    }
    int clumsy(int N) {
        return _innClumsy(N, true);
    }
};
