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
    void swap_and_shift(ListNode* &n1_c, ListNode* &n2_c){
        ListNode* n2_next = n2_c->next;
        
        if(n1_c->next != nullptr && 
           n2_c->val > n1_c->next->val){
            // shift if cur n2. val. is larger than next n1. val.
            n1_c = n1_c->next;
            return;
        }else if(n1_c->next == nullptr){
            // append all n2 list to n1
            n1_c->next = n2_c;
            n1_c = nullptr;
            return;
        }
        n2_c->next = n1_c->next;
        n1_c->next = n2_c;
        n1_c = n1_c->next;
        n2_c = n2_next;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* n1_c = l1;
        ListNode* n2_c = l2;
        
        while(n1_c != nullptr && n2_c != nullptr){
            if(n1_c->val <= n2_c->val){
                if(l1->val <= l2->val){
                    swap_and_shift(n1_c, n2_c);
                }else{
                    // special case (avoid to case of flipping)
                    swap_and_shift(n2_c, n1_c);
                }
            }else{
                if(l2->val <= l1->val){
                    swap_and_shift(n2_c, n1_c);
                }else{
                    // special case (avoid to case of flipping)
                    swap_and_shift(n1_c, n2_c);
                }
            }
        }
        if(l2 == nullptr){
            return l1;
        }else if(l1 == nullptr){
            return l2;
        }else{
            return (l1->val <= l2->val)?l1:l2;    
        }
    }
};
