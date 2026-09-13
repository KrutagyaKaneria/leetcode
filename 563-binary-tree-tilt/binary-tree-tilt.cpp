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
    int total_tilt = 0;
    int titeval(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftsum = titeval(root->left);
        int rightsum = titeval(root->right);

        total_tilt += abs(leftsum - rightsum);

        return root->val + leftsum + rightsum;
    }

    int findTilt(TreeNode* root) {
        total_tilt = 0; 
        titeval(root);
        return total_tilt;
    }
};