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
    TreeNode* bTree(vector<int>& inorder, int st, int ed, 
                            map<int, int>& m, vector<int>& postorder){
        if((ed - st) < 0){
            return NULL;
        }
        // construct current node
        int root_val = postorder.back();
        TreeNode* root = new TreeNode(root_val);
        postorder.pop_back();
        // decides where is position of the split
        int split = m[root_val];
        root->right = bTree(inorder, split + 1, ed, m, postorder);
        root->left = bTree(inorder, st, split -1, m, postorder);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // construct a map which maps value to index
        map<int,int> in_m;
        for(int i = 0; i < inorder.size(); i++){
            in_m[inorder[i]] = i;
        }
        return bTree(inorder, 0, inorder.size()-1, in_m, postorder);
    }
};
