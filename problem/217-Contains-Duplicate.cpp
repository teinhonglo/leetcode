class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> rec;
        bool is_cont_dup = false;
        for(int e:nums){
            if(rec.find(e) == rec.end()){
                rec[e] = 0;
            }else{
                rec[e] = rec[e] + 1;
                is_cont_dup = true;
                break;
            }
        }
        return is_cont_dup;
    }
};
