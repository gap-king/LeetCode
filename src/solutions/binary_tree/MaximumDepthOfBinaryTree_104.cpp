#include "MaximumDepthOfBinaryTree_104.hpp"

// Only one time of logic should be considered in recursion method
int FindDepth(TreeNode *node) {
    // This statement is universal for Binary Tree recursion.
    if (node == nullptr) {
        return 0;
    }
    int leftMax = FindDepth(node->m_left);
    int rightMax = FindDepth(node->m_right);
    int maxDepth = std::max(leftMax, rightMax);

    return maxDepth + 1;
}


int MaximumDepthOfBinaryTree::operator()(TreeNode *root) {
    return FindDepth(root);
}