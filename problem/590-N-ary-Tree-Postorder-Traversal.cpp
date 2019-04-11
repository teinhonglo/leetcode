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
    vector<int> post_vec;
    vector<int> postorder(Node* root) {
        if(root == nullptr) return post_vec;
        // recursive
        /*
        for(Node* sub_root : root->children){
            postorder(sub_root);
        }
        post_vec.push_back(root->val);
        return post_vec;
        */
        stack<Node*> trav_tree;
        Node* cur_root;
        trav_tree.push(root);
        
        while(!trav_tree.empty()){
            cur_root = trav_tree.top();
            post_vec.push_back(cur_root->val);
            trav_tree.pop();
            if(cur_root->children.size()){
                for(auto node: cur_root->children){
                    trav_tree.push(node);
                }
            }
        }
        reverse(post_vec.begin(), post_vec.end());
        return post_vec;
    }
};
