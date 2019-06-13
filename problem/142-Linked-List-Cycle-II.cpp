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
    ListNode *detectCycle(ListNode *head) {
        ListNode* normal = head;
        unordered_map <ListNode*, int> prev_path;
        
        while(normal){
            if(prev_path.find(normal) != prev_path.end()){
                // has cycle
                break;
            }else{
                prev_path[normal] = 1;
            }
            normal = normal->next;
        }
        return normal;
    }
};
