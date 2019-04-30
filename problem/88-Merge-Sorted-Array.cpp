class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = 0, i2 = 0;
        int i = 0;
        
        for(int j = m; j < nums1.size(); j++){
            nums1[j] = INT_MAX;
        }
        // merge two sorted array
        while(i1 < nums1.size() && i2 < n){
            if(nums1[i1] <= nums2[i2]){
                i1++;
            }else{
                // shift nums1 to left
                for(int t = m; t > i1; t--){
                    nums1[t] = nums1[t-1];
                }
                m += 1;
                nums1[i1] = nums2[i2];
                i1++;
                i2++;
            }
        }
    }
};
