class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) return intersect(nums2, nums1);
	// preprocess
        sort(nums2.begin(), nums2.end());
        vector<int> intersect_vec;
	// initialization
        int left = 0;
        int right = nums2.size() - 1;
        int mid = (left + right) / 2;
        bool is_match = false;
        
        for(int i = 0; i < nums1.size(); i++){
            // binary search
            do{
                mid = (left + right) / 2;
                if(nums1[i] == nums2[mid]){
                    is_match = true;
                    nums2.erase(nums2.begin()+mid);
                    break;
                }else if(nums1[i] > nums2[mid]){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
            }while(left <= right);
            // reset left and right
            left = 0;
            right = nums2.size() - 1;
            if(is_match){
                intersect_vec.push_back(nums1[i]);
                is_match = false;
            }
        }
        return intersect_vec;
    }
};
