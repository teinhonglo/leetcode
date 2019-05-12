class Solution {
public:
    bool isAnagram(string s, string t) {
        // s = "anagram", t = "nagaram"
        // true
        if(s.length() != t.length()) return false;
        int len_char = 26;
        
        bool is_anagram = true;
        char s_rec[len_char] = {0};
        char t_rec[len_char] = {0};
        
        for(int i = 0; i < s.length(); i++){
            s_rec[s[i] - 'a']++;
            t_rec[t[i] - 'a']++;
        }
        
        for(int i = 0; i < len_char; i++){
            if(s_rec[i] != t_rec[i]){
                is_anagram = false;
                break;
            }
        }
        
        return is_anagram;
    }
};
