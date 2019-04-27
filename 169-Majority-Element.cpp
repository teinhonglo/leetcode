class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> n_map;
	// count each value in nums array
        for(int n:nums){
            n_map[n]++;
        }
	// find majority element
        unordered_map<int, int>::iterator it;
        int max_val = 0, major_num = 0;
        for(it = n_map.begin(); it != n_map.end(); it++){
            if(it->second > max_val){
                major_num = it->first;
                max_val = it->second; 
            }            
        }
        return major_num;
    }
};
