class Solution {
public:
    string multiply(string num1, string num2) {
        // init maximun digit array, int[num1.len + num2.len]
        vector<int> results(num1.length() + num2.length() + 1);
        int off_idx = 0;
        // iterative second string (for n2 in nums2)
        for(int j = num2.length() - 1; j >= 0; j--){
            // iterative first string (for n1 in nums1)
            for(int i = num1.length() - 1; i >= 0; i--){
                // adding cur num at right place
                int cur_idx = (results.size() - 1) - off_idx - (num1.length() - 1 - i);
                results[cur_idx] += (num1[i] - '0') * (num2[j] - '0');
                // check we have carry or not
                if(results[cur_idx] > 9){
                    int carry = results[cur_idx] / 10;
                    results[cur_idx] %= 10;
                    results[cur_idx - 1] += carry;
                }
            }
            off_idx++;
        }
        // convert int vector to str
        string mulstr = "";
        bool is_assign = false;
        for(int i = 0; i < results.size(); i++){
            // remove leading zero
            if(!is_assign && results[i] == 0 && results.size()) continue;
            char c = results[i] + '0';
            mulstr += c;
            is_assign = true;
        }
        if(mulstr.length() == 0) mulstr = "0";
        return mulstr;
    }
};
