bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL) {
        return false;
    }

    int remaining = targetSum - root->val;
    if (root->left == NULL && root->right == NULL) {
        return remaining == 0;
    }

    return hasPathSum(root->left, remaining) ||
           hasPathSum(root->right, remaining);
}
