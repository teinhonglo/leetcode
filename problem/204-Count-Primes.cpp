class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        for(int i = 2; i < n; i++){
            bool is_prime = true;
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j){
                    continue;
                }else{
                    is_prime = false;
                    break;
                }
            }
            if(is_prime){
                count++;
            }
        }
        return count;
    }
};
