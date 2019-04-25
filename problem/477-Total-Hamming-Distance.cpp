class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        vector<int>lsb(2);
        int zero_count = 0;
        int total_hamming = 0;
        
        while(true){
            // count lsb of all numbers
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0) zero_count++;
                lsb[nums[i]%2]++;
                nums[i] >>= 1;
            }
            // total hamming distance
            total_hamming += lsb[0] * lsb[1];
            // all number are zeros
            if(zero_count == nums.size()) break;
            // reset parameters
            zero_count = lsb[0] = lsb[1] = 0;
        }
        return total_hamming;
    }
};
