class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res{-1, -1};
        bool is_find = false;
        for(int i = 0; i < numbers.size() 
            && numbers[i] <= target; i++){
            res[0] = i + 1;
            is_find = false;
            for(int j = i + 1; j < numbers.size() 
                && numbers[i] + numbers[j] <=  target; j++){
                if(numbers[i] + numbers[j] == target){
                    res[1] = j + 1;
                    is_find = true;
                    break;
                }
            }
            if(is_find) break;
        }
        return res;
    }
};
