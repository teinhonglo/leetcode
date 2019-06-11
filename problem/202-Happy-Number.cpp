class Solution {
public:
    bool isHappy(int n) {
        set<int> sn;
        while(true){
            sn.insert(n);
            int n_ = 0;
            // count summation of each digit
            while(n){
                n_ += (n % 10) * (n % 10);
                n /= 10;
            }
            n = n_;
            // check if whether happy number or not
            if(n == 0 || sn.count(n)){
                break;
            }
        }
        return (n == 1);
    }
    
};
