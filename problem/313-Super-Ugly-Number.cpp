class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n <= 1) return n;
        vector<int>k(n);
	// num of pointer
        vector<int>p(primes.size(), 0);
        k[0] = 1;
        for(int i = 1; i < n; i++){
            int min = INT_MAX;
            for(int j = 0; j < primes.size(); j++){
                // e.g., min(2 * (1, 2, 3), 3*(1, 2, 3), 5*(1, 2, 3)
                if(k[p[j]] * primes[j] < min){
                    min = k[p[j]] * primes[j];
                }
            }
            k[i] = min;
            // if k is computed, the pointer shift to next            
            for(int j = 0; j < primes.size(); j++){
                if(k[i] == k[p[j]] * primes[j]){
                    p[j]++;
                }
            }
            
        }
        return k.back();
        
    }
};
