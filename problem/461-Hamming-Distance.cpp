class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamming_dist = 0;
        while(x || y){
            if(x % 2 != y % 2)
                hamming_dist += 1;
            x /= 2;
            y /= 2;
        }
        return hamming_dist;
    }
};
