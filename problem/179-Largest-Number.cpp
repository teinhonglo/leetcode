class Solution {
public:
    static bool cmp(string& s1, string& s2){
        return s1+s2 > s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        string ret_str = "";
        // convert each numerics type to string type
        for(int i = 0; i < nums.size(); i++){
            str_nums.push_back(to_string(nums[i]));
        }
        // sorted by combination between two numbers
        sort(str_nums.begin(), str_nums.end(), cmp);
        
        for(int i = 0; i < str_nums.size(); i++){
            ret_str += str_nums[i];
        }
        // remove corner case, (leading zeros)
        while(ret_str[0] == '0' && ret_str.length() > 1) ret_str.erase(0,1);
        
        return ret_str;
    }
};
