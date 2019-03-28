class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0;
        int num_assign = 0;
	// sort array to ensure small to large
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
	// assign cookies to each child
        for(;i < g.size(); i++){
            for(;j < s.size();j++){
                if(g[i] <= s[j]){
		    // valid assignment
                    num_assign += 1;
		    // avoid assign repeated
                    j++;
                    break;
                }
            }
        }
        return num_assign;
    }
};
