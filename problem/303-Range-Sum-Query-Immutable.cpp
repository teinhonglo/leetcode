class NumArray {
public:
    NumArray(vector<int>& nums) {
	// Hint: dynamic programming
        for(int i = 0; i < nums.size(); i++){
            acc_sum.push_back(nums[i] + acc_sum[i]);
        }
    }
    
    int sumRange(int i, int j) {
        return acc_sum[j+1] - acc_sum[i];
    }
private:
    vector<int>acc_sum{0};
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

