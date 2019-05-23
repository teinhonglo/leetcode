class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // initialize k-th vector
        vector<int>kth_vec(nums.begin(), nums.begin()+k);
        sort(kth_vec.begin(), kth_vec.end());
        kth_vec.push_back(INT_MAX);
        
        for(int i = k; i < nums.size(); i++){
            if(nums[i] > kth_vec[0]){
                for(int j = 0; j < kth_vec.size(); j++){
                    // check and shift
                    if(nums[i] < kth_vec[j]){
                        for(int z = 0; z < j-1; z++){
                            kth_vec[z] = kth_vec[z+1];
                        }
                        kth_vec[j-1] = nums[i];
                        break;
                    }
                }
            }
        }
        return kth_vec[0];
    }
};
