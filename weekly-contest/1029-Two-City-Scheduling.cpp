class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return abs(a[0] - a[1]) >= abs(b[0] - b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // init
        int half = costs.size() / 2, num_A = 0, num_B = 0;
        int total_cost = 0;
        // sort array by cost |A-B|
        sort(costs.begin(), costs.end(), comp);
        // iterative
        for(vector<int> c: costs){
            if(num_A < half && num_B < half){
                if(c[0] <= c[1]){
                    num_A++;
                    total_cost += c[0];
                }else{
                    num_B++;
                    total_cost += c[1];
                }
            }else if(num_A < half){
                num_A++;
                total_cost += c[0];
            }else{
                num_B++;
                total_cost += c[1];
            }
        }
        return total_cost;
    }
};
