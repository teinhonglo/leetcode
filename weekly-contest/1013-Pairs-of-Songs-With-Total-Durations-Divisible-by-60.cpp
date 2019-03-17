class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        int divisible = 60;
        vector<int> remainder(divisible, 0);
        for(int i = 0; i < time.size(); i++){
            ++remainder[time[i] % 60];
        }
        ans = (remainder[0] * (remainder[0] - 1)) / 2;
        for(int i = 1; i < divisible / 2; i++){
            ans += (remainder[i] * remainder[divisible - i]);
        }
        ans += (remainder[30] * (remainder[30] - 1)) / 2;
        return ans;
    }
};
