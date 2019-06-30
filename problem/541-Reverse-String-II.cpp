class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.length(); i += 2 * k){
            int st_idx = i, ed_idx = i + k - 1;
            if(ed_idx < s.length()){
                // Reverse string which is first k elements in 2k range
                int range = k / 2;
                for(int j = 0; j < range; j++){
                    swap(s[st_idx], s[ed_idx]);
                    st_idx++;
                    ed_idx--;
                }
            }else{
                // Reverse remain string 
                ed_idx = s.length() - 1;
                int range = ed_idx - st_idx;
                for(int j = 0; j <= range / 2; j++){
                    swap(s[st_idx], s[ed_idx]);
                    st_idx++;
                    ed_idx--;
                }
            }
        }
        return s;
    }
};
