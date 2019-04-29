class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0, sum = 0, val_a, val_b;
        string sum_str = "";
        // add binary
        int ia = a.length() -1, ib = b.length() -1;
        while(ia >= 0 || ib >= 0){
            // check whether exceed most significant bit (MSB)
            val_a = (ia >= 0)? a[ia--]-'0': 0;
            val_b = (ib >= 0)? b[ib--]-'0': 0;
            // sum and carry
            sum = (val_a + val_b + carry) % 2;
            carry = (val_a + val_b + carry) / 2;
            sum_str = to_string(sum) + sum_str;
        }
        if(carry == 1){
            sum_str = to_string(carry) + sum_str;
        }
        return sum_str;
    }
};
