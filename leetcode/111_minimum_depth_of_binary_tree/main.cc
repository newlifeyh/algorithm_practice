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
    int minDepth(TreeNode* root) {
        if( root ){
            if( root->left && !root->right ){
                return minDepth( root->left ) + 1;
            }
            else if( root->right && !root->left ){
                return minDepth( root->right ) + 1;
            }
            return min( minDepth(root->left), minDepth(root->right) ) + 1;
        }
        else{
            return 0;
        }
    }
};