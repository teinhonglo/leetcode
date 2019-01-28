class Solution {
public:
    bool isVowels(char c){
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        int uppershift = 32;
        for(int i = 0; i < 5; i++){
            char uppercase = vowels[i] - uppershift;
            if(c == vowels[i] || c == uppercase)
                return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int j = s.length() -1;
        for(int i = 0; i < j; ++i){
            if(isVowels(s[i])){
                for(; j > i; --j){
                    if(isVowels(s[j])){
                        // swap
                        s[i] = s[i] + s[j];
                        s[j] = s[i] - s[j];
                        s[i] = s[i] - s[j];
                        --j;
                        break;
                    }
                }
            }else{
                continue;
            }
        }
        return s;
    }
};