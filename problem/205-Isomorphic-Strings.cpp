class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        
        map<char, char> s_map;
        map<char, char> t_map;
        bool is_isomorphic = true;
        
        for(int i = 0; i < s.length(); i++){
            if(s_map.count(s[i]) == 0 && t_map.count(t[i]) == 0){
                s_map[s[i]] = t[i];
                t_map[t[i]] = s[i];
            }else if(s_map[s[i]] != t[i]){
                is_isomorphic = false;
                break;
            }else if(t_map[t[i]] != s[i]){
                is_isomorphic = false;
                break;
            }
        }
        return is_isomorphic;
    }
};
