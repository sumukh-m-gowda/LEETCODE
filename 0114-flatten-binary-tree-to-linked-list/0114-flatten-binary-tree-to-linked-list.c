/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* temp;
void flattenHelper(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    flattenHelper(root->right);
    flattenHelper(root->left);
    root->right = temp;
    root->left = NULL;
    temp = root;
}
void flatten(struct TreeNode* root) {
    temp = NULL;
    flattenHelper(root);
}