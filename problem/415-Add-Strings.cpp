class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        int sum, d1, d2 = 0;
        int num1_len = num1.length();
        int num2_len = num2.length();
        int max_len = (num1_len > num2_len)?num1_len:num2_len;
        string sum_str = "";
        for(int i = 0; i < max_len; i++){
            d2 = (i < num2_len)?num2[num2_len -1 -i] - '0':0;
            d1 = (i < num1_len)?num1[num1_len -1 -i] - '0':0;            
            sum = d1 + d2 + carry;
            if(sum > 9){
                carry = sum / 10;
                sum = sum % 10;
            }else{
                carry = 0;
            }
            sum_str = to_string(sum) + sum_str;
        }
        if(carry > 0){
            sum_str = to_string(carry) + sum_str;
        }
        return sum_str;
    }
};
