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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==NULL || p==NULL){
            return p==q;
        };
        bool leftsame = isSameTree(q->left,p->left);
        bool rightsame= isSameTree(q->right,p->right);
        return leftsame && rightsame && q->val == p->val;
}
};