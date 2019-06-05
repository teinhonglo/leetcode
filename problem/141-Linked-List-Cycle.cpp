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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* normal = head;
        bool has_cycle = false;
        // check if cycle or not.
        while(normal){
            if(fast->next && fast->next->next){
                fast = fast->next->next;
            }else{
                // if current node is on tail, then we have not cycle.
                has_cycle = false;
                break;
            }
            normal = normal->next;
            
            if(fast == normal){
                // if fast node equals to normal node, then we have cycle.
                has_cycle = true;
                break;
            }
        }
        
        return has_cycle;
    }
};
