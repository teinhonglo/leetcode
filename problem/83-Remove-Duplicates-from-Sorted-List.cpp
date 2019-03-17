/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* prev_node = head;
        ListNode* cur_node = head->next;
        
        while(cur_node){
            if(cur_node->val == prev_node->val){
                cur_node = cur_node->next;
                prev_node->next = cur_node;
            }else{
                prev_node = cur_node;
                cur_node = cur_node->next;
            }
        }
        return head;
    }
};
