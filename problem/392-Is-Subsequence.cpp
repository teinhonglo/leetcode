class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_p = 0;
        bool is_sub = true;
        // two pointer of string s and string t
        for(int t_p = 0; 
            t_p < t.length() && s_p < s.length();
            t_p++){
            // if t_str == s_str, then plus one to s_p
            if(t[t_p] == s[s_p]){
                s_p++;
            }
        }
        // check whether subsequence or not
        is_sub = (s_p == s.length())?true:false;
        return is_sub;
    }
};
