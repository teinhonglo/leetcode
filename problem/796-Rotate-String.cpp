class Solution {
public:
    bool rotateString(string A, string B) {
        if(A == "" && B == "") return true;
        // initialization
        size_t found = A.find(B[0]);
        bool is_match = false;
        string shift_A = "";
        // found and shift
        if(found == std::string::npos){
            return is_match;
        }else{
            // iterative found B[0] in A
            while(found != std::string::npos){
                shift_A = A.substr(found, A.size() - found) + A.substr(0, found);
                if(shift_A.compare(B) == 0){
                    is_match = true;
                    break;
                }
                found = A.find(B[0], ++found);
            }
            return is_match;
        }
    }
};
