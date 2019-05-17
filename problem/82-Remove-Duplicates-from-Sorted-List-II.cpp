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
        ListNode* prev_node = NULL;
        ListNode* cur_node = head;
        bool is_dup = false;
        
        while(cur_node->next){
            if(cur_node->val != cur_node->next->val){
                if(is_dup){
                    if(prev_node){
                        // remove median duplicated elements
                        cur_node = cur_node->next;
                        prev_node->next = cur_node;
                    }else{
                        // remove head duplicated elements
                        head = cur_node->next;
                        cur_node = head;
                    }
                    is_dup = false;
                }else{
                    // shift to next element
                    prev_node = cur_node;
                    cur_node = cur_node->next;
                }
            }else{
                // record duplicated range
                cur_node = cur_node->next;
                is_dup = true;
            }
        }
        // remove tailed duplicated elements
        if(is_dup){
            if(prev_node){
                cur_node = cur_node->next;
                prev_node->next = cur_node;
            }else{
                head = cur_node->next;
            }
        }
        return head;
        
    }
};
