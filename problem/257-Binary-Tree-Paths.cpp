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
    vector<string> root2left;
    void pathTree(TreeNode* root, string path){
        // check wheater current root is left or not
        if(root->left == nullptr && root->right == nullptr){
            path += std::to_string(root->val);
            root2left.push_back(path);
            return;
        }
        path += std::to_string(root->val) + "->";
        if(root->left) pathTree(root->left, path);
        if(root->right) pathTree(root->right, path);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == nullptr) return root2left;
        pathTree(root, "");
        return root2left;
    }
};
