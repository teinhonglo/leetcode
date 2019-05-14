class Solution {
public:
    // Comparison function for sorting the set by increasing order of its pair's 
    // second value. If second value are equal, order by the pair's first value
    struct comp
    {
	    template<typename T>
	    bool operator()(const T& l, const T& r) const
	    {
		    if (l.second != r.second)
			    return l.second > r.second;

		    return l.first > r.first;
	    }
    };
    
    string frequencySort(string s) {
        // create a map
        map <char, int> ltc;
        string ret = "";
        for(int i = 0; i < s.length(); i++){
            if(ltc.find(s[i]) != ltc.end()){
                ltc[s[i]]++;
            }else{
                ltc[s[i]] = 1;
            }
        }
        // create a empty vector of pairs
	std::set<std::pair<char,int>, comp> set(ltc.begin(), ltc.end());
        // create a string sorted by frequency
	for (auto const &pair: set) {
            for(int i = 0; i < pair.second; i++){
                ret += pair.first;
            }
	}
        return ret;
    }
};
