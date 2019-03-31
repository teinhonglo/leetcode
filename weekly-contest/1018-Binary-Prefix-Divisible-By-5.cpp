class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> divBy5;
        int num = 0;
        for(int i = 0; i < A.size(); i++){
            // avoid overflow
            num = (num * 2 + A[i]) % 5;
            divBy5.push_back(!num);
        }
        return divBy5;
    }
};
