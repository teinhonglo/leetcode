class Solution {
public:
    string reverseString(string s) {
        string rs = "";
        for(int i = 0; i < s.length(); i++){
            rs = s[i] + rs;
        }
        return rs;
    }
};