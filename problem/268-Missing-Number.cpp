class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (1 + nums.size()) * nums.size() / 2;
        for(int n:nums){
            sum -= n;
        }
        return sum;
    }
};
