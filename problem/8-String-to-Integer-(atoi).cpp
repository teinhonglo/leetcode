class Solution {
public:
    int myAtoi(string str) {
        // find first not of whitespace
        size_t real_num_begin = str.find_first_not_of(' ');
        // string not contain numeric, return zero
        if(real_num_begin == std::string::npos) return 0;
        
        int is_pos = 1;
        long ans = 0;
        // process special case of postive or negative sign
        if(str[real_num_begin] == '-'){
            is_pos = -1;
            real_num_begin++;
        }else if(str[real_num_begin] == '+'){
            is_pos = 1;
            real_num_begin++;
        }
        str = str.substr(real_num_begin);
        
        if(str.length() == 0) return 0;
        int i = 0;
        // string to integer
        while(str[i] >= '0' && str[i] <= '9'){
            ans = ans * 10 + (str[i] - '0');
            if(is_pos == 1 && ans >= INT_MAX) return INT_MAX;
            if(is_pos == -1 && -ans <= INT_MIN) return INT_MIN;
            i++;
        }
        return ans * is_pos;
    }
};
