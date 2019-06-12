class Solution {
public:
    string convertToTitle(int n) {
        string title = "";
        while(n){
            int i = (n-1) % 26;
            title = (char)('A' + i) + title;
            n = (n-1) / 26;
        }
        return title;
    }
};
