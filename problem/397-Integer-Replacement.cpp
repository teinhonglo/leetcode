class Solution {
public:
    int intRep(long long n){
        if(n == 1){
            return 0;
        }
        if(n % 2 == 0){
            return intRep(n/2) + 1;
        }else{
            return min(intRep(n-1),intRep(n+1)) + 1;
        }
    }
    int integerReplacement(int n) {
        int num_rep = intRep(n);
        return num_rep;
    }
};
