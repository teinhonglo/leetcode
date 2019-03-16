class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum = 1;
        int remainder = 0;
        int carry = 0;
        for(int i = digits.size() - 1; i >= 0; i--){
            sum += digits[i] + carry;
            if(sum < 10){
                digits[i] = sum;
                carry = 0;
                break;
            }else{
                carry = sum / 10;
                remainder = sum % 10;
                digits[i] = remainder;
                sum = 0;
            }
        }
        if(carry > 0){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
