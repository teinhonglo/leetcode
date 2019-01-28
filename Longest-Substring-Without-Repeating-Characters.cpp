class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string MaxSubStr = "";
        string checkStr = "";
        if(s.length() != 0){
            for(int p = 0; p < s.length(); p++)
            {
                checkStr = s[p];
                for(int c = p + 1; c < s.length(); c++)
                {
                    // no reapeat
                    int findIdxSub = checkStr.find(s[c]);
                    int findIdxOrigin = s.substr(c).find(checkStr) + c;
					// check either in checkStr or not.
                    if(findIdxSub >= 0 && findIdxSub <= checkStr.length()){
                        if(checkStr[findIdxSub] == checkStr.length()-1){
							// repeat in checkStr, one character
                            p = c -1;
						}
                        break;
                    }
                    
                    if(findIdxOrigin == p + checkStr.length()){
						// repeat in origin string, one or more character
                        p = c - 1;
                        break;
                    }
                    checkStr += s[c];
                }
                if(checkStr.length() > MaxSubStr.length())
                {
                    MaxSubStr = checkStr;
                }
            }
        }
        return MaxSubStr.length();
    }
};