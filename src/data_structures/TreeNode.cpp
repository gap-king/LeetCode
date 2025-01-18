#include "TreeNode.hpp"

void DeleteBinaryTree(TreeNode * &root)
{
    if (root == nullptr) {
        return;
    }
    DeleteBinaryTree(root->m_left);
    DeleteBinaryTree(root->m_right);
    delete root;
    root = nullptr; // It is crucial to set to nullptr to avoid dangling pointer
    return;
}


TreeNode *CreateTreeNodeCase1()
{
    TreeNode *root = TreeNode::CreateNode(1);
    root->m_left = TreeNode::CreateNode(2);
    root->m_right = TreeNode::CreateNode(3);
    root->m_left->m_left = TreeNode::CreateNode(4);
    root->m_left->m_right = TreeNode::CreateNode(5);
    root->m_left->m_left->m_left = TreeNode::CreateNode(6);
    return root;
}