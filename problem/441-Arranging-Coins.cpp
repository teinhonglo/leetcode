class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        for(int cur_coin = 1; (n - cur_coin) >= 0; cur_coin++, count++){
            n -= cur_coin;
        }
        return count;
    }
};
