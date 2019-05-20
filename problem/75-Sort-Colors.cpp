class Solution {
public:
    void sortColors(vector<int>& nums) {
        int front = 0, back = nums.size()-1;
        // sort using left always less than right
        while(front < back && back != 0){
            if(nums[front] == 0){
                front++;
            }else{
                int tmp_back = back;
                while(nums[front] <= nums[back] && back > front) back--;
                // switch front and back
                int tmp_front = nums[front];
                nums[front] = nums[back];
                nums[back] = tmp_front;
                // if nums[front] equals to 1, 
                // then fixed back and plus front
                if(tmp_front == 1){
                    front++;
                    back = tmp_back;
                }
            }
        }
    }
};
