#include <limits>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nge_vec(nums1.size(), -1);
        bool ck_ge = false;
        // iterative num1 array
        for(int i = 0; i < nums1.size(); i++){
            ck_ge = false;
            for(int j = 0; j < nums2.size(); j++){
                if(ck_ge && nums1[i] < nums2[j]){
                    nge_vec[i] = nums2[j];
                    break;
                }
                if(nums1[i] == nums2[j]){
                    ck_ge = true;
                }
            }
        }
        return nge_vec;
    }
};
