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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* curr = root;

        while (curr != nullptr) {
            if (curr->left == nullptr) {
                // No left child: visit this node
                result.push_back(curr->val);
                curr = curr->right;
            } else {
                // Find the rightmost node in left subtree (inorder predecessor)
                TreeNode* pre = curr->left;
                while (pre->right != nullptr && pre->right != curr) {
                    pre = pre->right;
                }

                if (pre->right == nullptr) {
                    // Threading: Make a temporary link back to current
                    pre->right = curr;
                    curr = curr->left;
                } else {
                    // Left subtree already visited
                    pre->right = nullptr; // Remove the temporary thread
                    result.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }

        return result;
    }
};

