#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static bool mirror(struct TreeNode *a, struct TreeNode *b) {
    if (a == NULL || b == NULL) {
        return a == b;
    }

    if (a->val != b->val) {
        return false;
    }

    return mirror(a->left, b->right) && mirror(a->right, b->left);
}

bool isSymmetric(struct TreeNode *root) {
    if (root == NULL) {
        return true;
    }

    return mirror(root->left, root->right);
}
