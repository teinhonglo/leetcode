class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> rec_map;
        vector<int> uni_vec;
	// record number of appearing
        for(auto n: nums){
            if(rec_map.find(n) != rec_map.end()){
		// erase if appear two times
                rec_map.erase(n);
            }else{
		// new key if appear first time
                rec_map[n] = 1;
            }
        }
	// push back legal key
        for (std::map<int,int>::iterator it=rec_map.begin(); it!=rec_map.end(); ++it){
            uni_vec.push_back(it->first);
        }
        return uni_vec;
    }
};
