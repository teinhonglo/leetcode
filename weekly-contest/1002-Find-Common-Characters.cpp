class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        string fisrt_str = A[0];
        vector<string> common_chars;
        bool is_match = true;
        // iterative each char of first string.
        for(int i = 0; i < fisrt_str.length(); i++){
            char cur_char = fisrt_str[i];
            is_match = true;
            // check whether current char in the other string or not.
            for(int j = 1; j < A.size(); j++){
                size_t found = A[j].find(cur_char);
                if (found != std::string::npos){
                    // modify match char to avoid compare repeatly
                    A[j][found] -= 27;
                }else{
                    // no match
                    is_match = false;
                    break;
                }
            }
            // duplicates
            if(is_match){
                // covert char to string
                string str(1, cur_char);
                common_chars.push_back(str);
            }
        }
        return common_chars;
    }
};
