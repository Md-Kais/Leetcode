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
    unordered_map<int,int>m;
    int rootIndex=0;
    TreeNode* solve(vector<int>&preorder,vector<int>&inorder,int start,int end){
        if(start>end) return NULL;
        TreeNode* root=new TreeNode(preorder[rootIndex++]);
        int inorderIndex=m[root->val];
        root->left=solve(preorder,inorder,start,inorderIndex-1);
        root->right=solve(preorder,inorder,inorderIndex+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            m.insert({inorder[i],i});
        }
        return solve(preorder,inorder,0,inorder.size()-1);
    }
};