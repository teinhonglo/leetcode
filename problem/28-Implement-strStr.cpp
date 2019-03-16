class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0) return 0;
        int found = static_cast<int>(haystack.find(needle));
        return found;
    }
};
