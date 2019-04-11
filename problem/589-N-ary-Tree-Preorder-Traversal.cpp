/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(root == nullptr) return 0;
        stack<Node*> trav_tree;
        Node* cur_node = root;
        int max_depth = 1;
        cur_node->val = 1;
        // DFS
        while(cur_node){
            for(Node* chi_node : cur_node->children){
                chi_node->val = cur_node->val + 1;
                if(chi_node->val > max_depth){
                    max_depth = chi_node->val;
                }
                trav_tree.push(chi_node);
            }
            if(trav_tree.empty()) break;
            cur_node = trav_tree.top();
            trav_tree.pop();
        }
        return max_depth;
    }
};
