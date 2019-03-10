#include <algorithm>    // std::sort
#include <vector>       // std::vector

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        if(A.empty()) return 0;
        sort(A.begin(), A.end());
        int acc_val = 0;
        
        for(int does = 0; does < K; does++){   
            if(A[0] < 0){
                if(-1 * A[0] < A[1]){
                    A[0] *= -1;
                    continue;
                }    
                acc_val += -1 * A[0];
                A.erase(A.begin());
            }else if((K - does) % 2 == 1){
                A[0] = -1 * A[0];
                while(does + 2 < K){
                    does += 2;
                }
            }else if((K - does) % 2 == 0){
                break;                
            }
        }
        while(!A.empty()){
            acc_val += A[0];
            A.erase(A.begin());
        }
        return acc_val;
    }
};
