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
    TreeNode* bsTree(vector<int>& preorder, int& p_st, vector<int>& inorder, 
                     int i_st, int i_ed, unordered_map<int, int>& in_map){
        if(i_st > i_ed){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[p_st]);
        int split = in_map[preorder[p_st]];
        p_st++;
        
        root->left = bsTree(preorder, p_st, inorder, i_st, split-1, in_map);
        root->right = bsTree(preorder, p_st, inorder, split+1, i_ed, in_map);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> in_map;
        int p_st = 0;
        for(int i = 0; i < inorder.size(); i++) {
            in_map[inorder[i]] = i;
        }
        return bsTree(preorder, p_st, inorder, 0, preorder.size()-1, in_map);
    }
};
