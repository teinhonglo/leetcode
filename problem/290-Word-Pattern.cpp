class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char, string> pattern_map;
        map<string, char> str_map;
        int st = 0, next_white = 0;
        bool is_match = true;
        
        for(int i = 0; i < pattern.length(); i++, st = next_white + 1){
            next_white = str.find(" ", st);
            string word = str.substr(st, next_white - st);
            // check pattern ok or not
            if(pattern_map.count(pattern[i]) == 0 &&
               str_map.count(word) == 0){
                // init pair
                pattern_map[pattern[i]] = word;
                str_map[word] = pattern[i];
            }else if(word != pattern_map[pattern[i]]){
                // patern mismatch (pat->str)
                is_match = false;
                break;
            }else if(pattern[i] != str_map[word]){
                // patern mismatch (pat<-str)
                is_match = false;
                break;
            }
        }
        if(is_match && next_white != -1){
            is_match = false;
        }
        return is_match;
    }
};
