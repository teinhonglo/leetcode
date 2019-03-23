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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> level_order;
        if(!root) return level_order;
        
        vector<Node*> current_node;
        vector<Node*> stack;
        
        stack.push_back(root);
        while(stack.size()){
            vector<Node*> level;
            vector<int> level_int;
            
            for(int i = 0; i < stack.size(); i++){
                if(!stack[i]) continue;                
                level_int.push_back(stack[i]->val);
                current_node = stack[i]->children;
                for(int j = 0; j < current_node.size(); j++){
                    if(!current_node[j]) continue;
                    level.push_back(current_node[j]);
                }
            }

            stack = level;
            level_order.push_back(level_int);
        }
        return level_order;
    }
};
