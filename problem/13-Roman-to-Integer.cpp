class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman2dec = {
		    {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int prev_num = roman2dec[s[0]];
        int cur_num = 0;
        int sum = 0;
        // iterative each roman symbol
        for(int i = 1; i < s.length(); i++){
            cur_num = roman2dec[s[i]];
            
            if(cur_num > prev_num){
                // sub.
                sum -= prev_num;       
            }else{
                // add.
                sum += prev_num;
            }
            prev_num = cur_num;
        }
        sum += prev_num;
        return sum;
    }
};
