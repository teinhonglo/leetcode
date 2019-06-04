/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        vector<TreeNode*>prev_level;
        prev_level.push_back(root);
        bool is_sym = true;
        // Level-order travesal
        while(prev_level.size()){
            // current level TreeNode and val
            vector<TreeNode*> cur_level;
            vector<int> cur_level_val;
            // iterate preview level
            for(int i = 0; i < prev_level.size(); i++){
                if(prev_level[i]->left){
                    cur_level.push_back(prev_level[i]->left);
                    cur_level_val.push_back(prev_level[i]->left->val);
                }else{
                    // if left child is nullptr, then push -100
                    cur_level_val.push_back(-100);
                }
                if(prev_level[i]->right){
                    cur_level.push_back(prev_level[i]->right);
                    cur_level_val.push_back(prev_level[i]->right->val);
                }else{
                    // if left child is nullptr, then push -100
                    cur_level_val.push_back(-100);
                }
            }
            // check if symmetric or not
            for(int i = 0; i < cur_level_val.size() / 2; i++){
                if(cur_level_val[i] != cur_level_val[cur_level_val.size() - 1 - i]){
                    is_sym = false;
                    break;
                }
            }
            if(!is_sym) break;
            // next level
            prev_level = cur_level;
        }
        return is_sym;
    }
};
