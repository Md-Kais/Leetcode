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
    bool ans=false;
    void solve(TreeNode* root, int targetSum,int sum) {
        if(!root->left && !root->right ) {
            sum+=root->val;
            if( targetSum==sum){
                   ans=true;
            return;
            }
         
        }
        else{
              sum+=(root->val);
        }
        if(root->left){
            solve(root->left,targetSum,sum);
        }
        if(root->right){
             solve(root->right,targetSum,sum);
        }
       
        sum-=(root->val);
      
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
       solve(root,targetSum,0);
          return ans;
    }
};