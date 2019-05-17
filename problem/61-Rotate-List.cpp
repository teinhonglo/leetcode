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
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        bool is_fst = true;
        
        for(int does = 0; does < k; does++){
            ListNode* cn = head;
            ListNode* pn = nullptr;
            // rotate and record length
            while(cn){
                len++;
                if(cn->next){
                    pn = cn;
                    cn = cn->next;
                }else{
                    if(pn){
                        cn->next = head;
                        head = cn;
                        pn->next = nullptr;
                    }
                    break;
                }
            }
            // elimate repeat rotate
            if(is_fst && len > 0 && k > len){
                k %= len;
                // corner case: 
                // it should be rotate "length" times
                k = (k == 0)?len:k;
                does = 0;
                is_fst = false;
            }
        }
        return head;
        
    }
};
