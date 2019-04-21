class Solution {
public:
    char findTheDifference(string s, string t) {
        /*
        char c;
        size_t match;
        for(int i = 0; i < t.length(); i++){
            match = s.find(t[i]);
            if(match != string::npos){
                s.erase(match, 1);
            }else{
                c = t[i];
                break;
            }
        }
        */
        int num_char = 26;
        char c;
        vector<char>s_rec(num_char, 0);
        vector<char>t_rec(num_char, 0);
        // record all char in s and t
        for(int i = 0; i < s.length(); i++){
            s_rec[s[i] - 'a']++;
            t_rec[t[i] - 'a']++;
        }
        t_rec[t.back() - 'a']++;
        for(int i = 0; i < num_char; i++){
            if(t_rec[i] != s_rec[i]){
                c = 'a' + i;
                break;
            }
        }
        return c;
    }
};
