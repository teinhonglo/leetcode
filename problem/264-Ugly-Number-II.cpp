class Solution {
public:
    int nthUglyNumber(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        vector<int> k(n);
        k[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for(int i = 1; i < n; i++){
            k[i] = min(2 * k[p2], min(3 * k[p3], 5 * k[p5]));
            if(k[i] == 2 * k[p2]) p2++;
            if(k[i] == 3 * k[p3]) p3++;
            if(k[i] == 5 * k[p5]) p5++;
        }
        return k.back();
    }
};
