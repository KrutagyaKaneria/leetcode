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
    int maxDepth(TreeNode* root) {
        // queue<TreeNode*> q;
        // q.push(root);

        // while(!q.empty()){
        //   TreeNode* temp = q.front();
        //     q.pop();
        //     cout << "root->" << root->val;

        //     if(root->left){
        //          int left = maxDepth(root->left);
        //     }
        //     if(root->right){
        //          int right = maxDepth(root->right);
        //     }

        if (root == nullptr) {
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return 1 + max(left, right);

        // }
        // return 1+max(left,right);
    }
};
