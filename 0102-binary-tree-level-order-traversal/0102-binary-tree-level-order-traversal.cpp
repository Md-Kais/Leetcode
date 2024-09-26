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
    vector<vector<int>> ans;

public:
    void lev(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while (q.empty() != true) {
            vector<int> a;

            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* r = q.front();
                a.push_back(r->val);
                q.pop();
                if (r->left != NULL) {
                    q.push(r->left);
                }
                if (r->right != NULL) {
                    q.push(r->right);
                }
            }
            ans.push_back(a);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) {
            return ans;
        }
        lev(root);
        return ans;
    }
};