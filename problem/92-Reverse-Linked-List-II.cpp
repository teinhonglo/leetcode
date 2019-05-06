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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int count = 1;
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* pprev = NULL;

        while(cur){
            if(count == m){
                // record prev
                pprev = prev;
                prev = cur;
                cur = cur->next;
            }else if(count > m && count < n){
                // reverse
                ListNode* tmp = cur->next;
                cur->next = prev;
                prev = cur;
                cur = tmp;
            }else if(count == n){
                // reverse
                ListNode* tmp = cur->next;
                cur->next = prev;
                prev = cur;
                // concat prev
                if(pprev == NULL){
                    // Special case.
                    // The index of th pprev less than first node.
                    pprev = head;
                    head = cur;
                    pprev->next = tmp;
                }else{
                    // Normal mode .
                    ListNode* pp_tmp = pprev->next;
                    pprev->next = cur;
                    // concat after
                    pp_tmp->next = tmp;
                }
            }else{
                // iterative
                prev = cur;
                cur = cur->next;
            }
            count++;
        }
        return head;
    }
};
