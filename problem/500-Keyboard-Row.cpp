#include <boost/algorithm/string.hpp>
#include <string>

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string upp_word = "";
        int j = 0;
        vector<string> row_alpha;
        vector<string> KEYBOARD{"QWERTYUIOP", "ASDFGHJKL", "ZXCVBNM"};
        for(int i = 0; i < words.size(); i++){
            upp_word = "" + words[i];
            transform(upp_word.begin(), upp_word.end(), upp_word.begin(), ::toupper); 
            bool all_match = true;
            for(int j = 0;j < KEYBOARD.size(); j++){
                // if find upp_word[0] in KEYBOARD
                if(KEYBOARD[j].find(upp_word[0]) != string::npos){
                    // find all element in word in KEYBOARD
                    for(int t = 1; t < upp_word.length(); t++){
                        // if any element not in KEYBOARD[j], then break
                        if(KEYBOARD[j].find(upp_word[t]) == string::npos){
                            all_match = false;  
                            break;
                        }
                    }
                }
                if(!all_match) break;
            }
            if(all_match){
                row_alpha.push_back(words[i]);
            }
        }
        return row_alpha;
    }
};
