class Solution {
public:
    string reverseWords(string s) {
        char tmp_s;
        int st_idx = 0, tail_idx = 0;
        s += " ";
        int found_sp = s.find(" ");
        
        while(found_sp != std::string::npos){
            // reverse sub-string
            for(int i = 0; i < (found_sp - st_idx) / 2; i++){
                tail_idx = found_sp - 1 - i;
                tmp_s = s[st_idx + i];
                s[st_idx + i] = s[tail_idx];
                s[tail_idx] = tmp_s;
            }
            st_idx = found_sp + 1;
            found_sp = s.find(" ", st_idx);
        }
        return s.substr(0, s.length() - 1);
    }
};
