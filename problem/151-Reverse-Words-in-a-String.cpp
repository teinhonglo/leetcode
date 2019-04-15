class Solution {
public:
    string reverseWords(string s) {
        // removing leading and tailing whitespace
        const std::string WHITESPACE = " \n\r\t\f\v";
        size_t rm_st = s.find_first_not_of(WHITESPACE);
        size_t rm_tail = s.find_last_not_of(WHITESPACE);
        if(rm_st == std::string::npos || 
           rm_tail == std::string::npos||
           s == "") 
            return "";
        s = s.substr(rm_st, rm_tail + 1 - rm_st);
        
        // adding new whilespace to the end of string
        s = s + " ";
        string r_s = "", cur_s = "";
        int st = 0;
        // found
        size_t found = s.find(" ", st);
        // while loop
        while(found != std::string::npos){
            // cur_s = s.substr(st, found - st)
            cur_s = s.substr(st, found - st);
            // rs = cur_s
            r_s = cur_s + " " + r_s;
            while(s[found] == ' ') found++;
            // st = found+1
            st = found;
            found = s.find(" ", st);
        }
        rm_tail = r_s.find_last_not_of(WHITESPACE);
        r_s = r_s.substr(0, rm_tail + 1);
        return r_s;
        
    }
};
