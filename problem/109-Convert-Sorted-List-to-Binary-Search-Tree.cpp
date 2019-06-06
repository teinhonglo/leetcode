/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* constructTree(vector<int>& nums){       
        int middle = nums.size() / 2;
        if(nums.size() == 0) return nullptr;
        else if(nums.size() == 1){
            TreeNode* root = new TreeNode(nums[0]);
            return root;
        }
        
        TreeNode* root = new TreeNode(nums[middle]);
        
        vector<int> left_vec(nums.begin(), nums.begin() + middle);
        vector<int> right_vec(nums.begin() + middle + 1, nums.end());
        
        root->left = constructTree(left_vec);
        root->right = constructTree(right_vec);
        
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* cur_node = head;
        vector<int> tn_vec;
        
        while(cur_node){
            tn_vec.push_back(cur_node->val);
            cur_node = cur_node->next;
        }
        return constructTree(tn_vec);
    }
};
