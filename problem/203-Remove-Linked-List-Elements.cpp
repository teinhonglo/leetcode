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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        // remove linkedlist by val
        while(cur != NULL){
            if(cur->val == val){
                cur = cur->next;
                if(prev == NULL){
                    // start
                    head = cur;
                }else if(cur == NULL){
                    // end
                    prev->next = NULL;
                }else{
                    // mid
                    prev->next = cur;
                }
            }else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
