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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nln, s;
        ListNode* cur_node = head;
        while(cur_node){
            nln.push_back(cur_node->val);
            cur_node = cur_node->next;
        }
        int tmp_val = 0;
        for(int i = nln.size() -1; i > -1; i--){
            tmp_val = nln[i];
            while(!s.empty() && s.back() <= nln[i]) s.pop_back();
            nln[i] = (!s.empty())? s.back(): 0;
            s.push_back(tmp_val);
        }
        return nln;
    }
};
