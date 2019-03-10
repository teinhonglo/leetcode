#include<sstream>
class Solution {
public:
    bool isPalindrome(int x) {
        # initialization
        int num = x;
        stringstream ss;
        string num_str;
        int str_length = 0;
        int mid = 0;
        # convert to string
        ss << num;
        ss >> num_str;
        ss.clear();
        str_length = num_str.length();
        # prepare endpoint
        mid = str_length / 2;
        bool isPalindrome = true;
        int e = str_length - 1;
        # check is palindrome or not
        for(int s = 0; s <= mid; s++, e--){
            if(num_str[s] != num_str[e]){
                cout << num_str[s] << "," << num_str[e];
                isPalindrome = false;
                break;
            }
        }   
        return isPalindrome;
    }
};