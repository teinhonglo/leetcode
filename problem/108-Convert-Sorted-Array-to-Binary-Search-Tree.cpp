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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int middle = nums.size() / 2;
        if(nums.size() == 0) return NULL;
        if(nums.size() == 1){
            TreeNode* bst = new TreeNode(nums[0]);
            return bst;
        }
        // create a root of the binary search tree (BST).
        TreeNode* bst = new TreeNode(nums[middle]);
        
        // left and right vector of the BST
        vector<int> left_vec(nums.begin(), nums.begin() + middle);
        vector<int> right_vec(nums.begin() + middle + 1, nums.end());
        
        // create left and right children.
        bst->left = sortedArrayToBST(left_vec);
        bst->right = sortedArrayToBST(right_vec);
        
        return bst;
    }
};
