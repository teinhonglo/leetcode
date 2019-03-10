#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median_index = (nums1.size() + nums2.size()) * 1.0 / 2;
        int round_up = (int)(median_index * 10) % 10;
        bool is_two_med = ( round_up > 0) ? true : false;
        
        int nums1_index = 0;
        int nums2_index = 0;
        int cur_point = 0;
        double median_window [2] = {0, 0};
        
        for(;cur_point < median_index;cur_point++){
        	
            if (nums1[nums1_index + 1] < nums2[nums2_index]){
                median_window[cur_point % 2] = nums1[nums1_index];
                nums1_index++;
            }else{
                median_window[cur_point % 2] = nums2[nums2_index];
                nums2_index++;
            }
        }
        double m = (is_two_med)? median_window[0] + median_window[1]: median_window[0];
        cout << median_window[0] << "," << median_window[1];
        return m;    
        
    }

int main() {
	// your code goes here
	vector<int> n { 1,2 };
	vector<int> m { 3 };
	findMedianSortedArrays(n, m);
	return 0;
}

