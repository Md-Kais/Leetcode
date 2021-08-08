/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<int>ans;
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
               
           
                Node* front=q.front();
                q.pop();
            
                if(front==NULL && q.empty()){
                    return root;
                }
                else if(front==NULL) {
                    q.push(NULL);
                    continue;
                }
                else{
                front->next=q.front();
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            
              
                }
            }
        return root;
        
    }
};