/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        queue<TreeNode* >q;
        if(root==NULL) return ans;
        q.push(root);
        
        while(!q.empty()){
            vector<int>v;
            int len=q.size();
            while(len--){
                   TreeNode *leaf=q.front();
            v.push_back(leaf->val);
            q.pop();
            if(leaf->left!= NULL){
                q.push(leaf->left);
               
            }
            if(leaf->right!=NULL){
                q.push(leaf->right);
               
            }
       
            }
                ans.push_back(v);
        }
         
           
       
      //  ans.push_back(v);
        return ans;
    }
};