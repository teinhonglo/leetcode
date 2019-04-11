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
    vector<int> po_vec;
    vector<int> preorder(Node* root){
        if(root == NULL) return po_vec;
        /* recursive
        po_vec.push_back(root->val);
        
        for(int i = 0; i < root->children.size(); i++){
            preorder(root->children[i]);
        }
        return po_vec;
        */
        // iterative
        vector<Node*> rec_vec;
        Node* cn = root;
        while(cn != NULL){
            po_vec.push_back(cn->val);
            for(int i = cn->children.size() - 1; i >= 0; i--){
                rec_vec.push_back(cn->children[i]);
            }
            if(!rec_vec.empty()){
                cn = rec_vec.back();
                rec_vec.pop_back();
            }else{
                cn = NULL;
            }
        }
        return po_vec;
    }
};
