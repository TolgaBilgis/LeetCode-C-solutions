int minDepth(struct TreeNode* root) {
    if (!root) return 0;
    if (!root->left) return minDepth(root->right) + 1;
    if (!root->right) return minDepth(root->left) + 1;
    int a = minDepth(root->left);
    int b = minDepth(root->right);
    return (a < b ? a : b) + 1;
}
