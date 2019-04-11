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
        vector<Node*> trav_tree;
        Node* cur_node = root;
        int max_depth = 1;
        cur_node->val = 1;
        // DFS
        while(cur_node){
            for(int i = cur_node->children.size() -1; i>=0; i--){
                cur_node->children[i]->val = cur_node->val + 1;
                if(cur_node->children[i]->val > max_depth){
                    max_depth = cur_node->children[i]->val;
                }
                trav_tree.push_back(cur_node->children[i]);
            }
            if(trav_tree.empty()) break;
            cur_node = trav_tree.back();
            trav_tree.pop_back();
        }
        return max_depth;
    }
};
