class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort array
        sort(nums.begin(), nums.end());
        int sig_num = nums[0];
        int count = 1;
        // check dup-num in array
        for(int i = 1; i < nums.size(); i++){
            if(sig_num != nums[i]){
                // switch
                if(count == 1){
                    // current number appears one
                    break;
                }else{
                    // current number appears twice
                    sig_num = nums[i];
                    count = 1;    
                }
            }else{
                // the same as previous number
                count++;
            }
        }
        return sig_num;
    }
};
