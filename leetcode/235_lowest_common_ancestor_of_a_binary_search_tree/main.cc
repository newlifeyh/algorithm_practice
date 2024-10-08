/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val > q->val)
        {
            std::swap(p, q);
        }
        while(root){
            if (p->val <= root->val && root->val <= q->val)
            {
                return root;
            }
            else{
                root = (root->val > q->val) ? root->left : root->right;
            }
        }
    };
};