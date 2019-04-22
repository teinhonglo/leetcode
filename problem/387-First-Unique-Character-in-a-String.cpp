class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>c(26, 0);
        map<char, int> fmap;
        int ret = -1;
        
        for(int i = 0; i < s.length(); i++){
            c[s[i] - 'a']++;
            if(fmap.find(s[i]) == fmap.end()){
                fmap[s[i]] = i;
            }
        }
        for(map<char,int>::iterator it=fmap.begin(); it!=fmap.end(); ++it){
            if(c[it->first - 'a'] == 1 && (it->second < ret || ret == -1)){
                ret = it->second;
            }
        }
        return ret;
    }
};
