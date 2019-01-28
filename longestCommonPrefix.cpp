class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string longPrefix = "";
        // first string
        string fst_str = strs[0];
        int fst_str_len = fst_str.length();
        // iter pos of first string
        for(int p = 0; p < fst_str_len; p++){
            // iter each pos of 2-end string
            bool isSame = true;
            for(int ci = 1; ci < strs.size(); ci++){
                if(fst_str[p] != strs[ci][p] || strs[ci].size() < p){
                    isSame = false;
                    break;
                }
            }
            // if true, add to longPrefix
            if(isSame)
                longPrefix += fst_str[p];
            else
                break;
        }
        return longPrefix;
    }
};
