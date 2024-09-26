/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        long long ans = -1;
        vector<long long> fight;
        fight.push_back(0);
        if(root == NULL){
            return -1;
        }
        q.push(root);
        while(q.empty()!= true){
            
            
            int  size = q.size();
            long long a=0;
            for(int i=0;i<size;i++){
                TreeNode* r = q.front();
                q.pop();
                a+=r->val;
                
                if(r->left != NULL){
                    q.push(r->left);
                }
                if(r->right !=NULL){
                    q.push(r->right);
                }
            }
            fight.push_back(a);
        }
        sort(fight.begin(),fight.end(),greater<long long>());
        if(fight.size()>k){
            ans=fight[k-1];
        }
        return ans;

    }
};