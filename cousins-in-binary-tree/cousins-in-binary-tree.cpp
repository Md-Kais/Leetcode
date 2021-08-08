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
    int c=0;
    pair<int,int> isC(TreeNode* root,int x,int depth,int parent){
        if(root==NULL) return {0,parent};
        if(root->val==x) return {depth,parent};
        pair<int,int>left=isC(root->left,x,depth+1,root->val);
        if(left.first!=0) return {left.first,left.second};
        pair<int,int>right=isC(root->right,x,depth+1,root->val);
        return {right.first,right.second};
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        pair<int,int>xx=isC(root,x,0,-1);
        pair<int,int>yy=isC(root,y,0,-1);
        if(xx.first!=yy.first || xx.second==yy.second) return false;
        else return true;
    }
};