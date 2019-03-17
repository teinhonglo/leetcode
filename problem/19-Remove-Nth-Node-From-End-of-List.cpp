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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count_path = -1;
        ListNode* bf_rm_node = head;
        ListNode* cur_node = head;
        // check where is the rm node (before)
        while(cur_node != NULL){
            cur_node = cur_node->next;
            count_path += 1;
            if(count_path > n){
                bf_rm_node = bf_rm_node->next;
            }
        }
        // remove assisn node
        if(count_path >= n){
            bf_rm_node->next = bf_rm_node->next->next;
        }else{
            head = head->next;
        }
        return head;
    }
};
