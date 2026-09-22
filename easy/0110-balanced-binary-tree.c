#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static int height(struct TreeNode *node) {
    if (node == NULL) return 0;

    int left = height(node->left);
    if (left < 0) return -1;

    int right = height(node->right);
    if (right < 0) return -1;

    if (abs(left - right) > 1) return -1;
    return (left > right ? left : right) + 1;
}

bool isBalanced(struct TreeNode *root) {
    return height(root) >= 0;
}
