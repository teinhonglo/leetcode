class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> nc;
        for(int i = 0; i < nums.size(); i++){
            if(nc.find(nums[i]) != nc.end()){
                nc[nums[i]]--;
                if(nc[nums[i]] == 0){
                    nc.erase(nc.find(nums[i]));
                }
            }else{
                nc[nums[i]] = 2;
            }
        }
        map<int,int>::iterator it = nc.begin();
        return it->first;
    }
};
