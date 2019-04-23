class Solution {
public:
    string decodeString(string s) {
        stack<char>es;
        string decode_str = "";
        int n_q = 0;
        // encode and decode
        for(int i = 0; i< s.length(); i++){
            if(s[i] == '['){
                es.push(s[i]);
                n_q++;
            }else if(s[i] == ']'){
                n_q--;
                string c_str = "", rep_str = "";
                int rep_int = 0;
                // extract current string
                while(!es.empty() && es.top() != '['){
                    c_str = es.top() + c_str;
                    es.pop();
                }
                if(!es.empty()) es.pop();
                // extract number of repeat
                while(!es.empty() && es.top() >= '0' && es.top() <= '9'){
                    rep_str = es.top() + rep_str;
                    es.pop();
                }
                // repeat string according to rep_int
                rep_int = (rep_str != "")?stoi(rep_str):1;
                string rep_c_str = "";
                for(int t = 0; t < rep_int; t++){
                    rep_c_str += c_str;
                }
                
                // if it remain left [, then push cur_str in stack
                // else decode it.
                if(n_q > 0){
                    for(int t = 0; t < rep_c_str.length(); t++){
                        es.push(rep_c_str[t]);
                    }
                }else{
                    decode_str += rep_c_str;
                }
            }else{
                // if it remain left [, then push cur_str in stack
                // else decode it.
                if(n_q > 0 || ('0' <= s[i] && s[i] <= '9')){
                    es.push(s[i]);
                }else{
                    decode_str += s[i];
                }
            }
        }
        return decode_str;
    }
    
};
