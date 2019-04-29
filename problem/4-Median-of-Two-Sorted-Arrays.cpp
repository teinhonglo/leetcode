class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>m_vec(nums1.begin(), nums1.end());
        m_vec.insert(m_vec.end(), nums2.begin(), nums2.end());
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        int i1 = 0, i2 = 0;
        bool is_odd = (m_vec.size() % 2);
        
        for(int i = 0; i < m_vec.size() / 2 + 1; i++){
            if(nums1[i1] < nums2[i2]){
                m_vec[i] = nums1[i1++];
            }else{
                m_vec[i] = nums2[i2++];
            }
        }
        if(is_odd){
            return m_vec[m_vec.size() / 2];
        }else{
            return (m_vec[m_vec.size()/2-1] + m_vec[m_vec.size()/2]) / 2.0;
        }
    }
};
