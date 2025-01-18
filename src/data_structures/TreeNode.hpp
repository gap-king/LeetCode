#ifndef TREE_NODE_HPP
#define TREE_NODE_HPP

/// @brief To match the LeetCode format, we don't use smart pointer.
/// @tparam T 
// template <typename T>
// struct TreeNode {
//     TreeNode(): m_val(T()), m_left(nullptr), m_right(nullptr) {}
//     TreeNode(T val): m_val(val) {}
//     TreeNode(T val, TreeNode *left, TreeNode *right) {}

//     T m_val;
//     TreeNode *m_left;
//     TreeNode *m_right;
// };

struct TreeNode {
    TreeNode(): m_val(0), m_left(nullptr), m_right(nullptr) {}
    TreeNode(int val): m_val(val) {}
    TreeNode(int val, TreeNode *left, TreeNode *right) {}

    static TreeNode *CreateNode(int val)
    {
        return new TreeNode(val);
    }

    int m_val;
    TreeNode *m_left;
    TreeNode *m_right;
};

/// @brief Delete a binary tree from root trough recursion
/// @param root If you don't use &, it will be difficult to set root to nullptr in recursion because every call will generate a new pointer point to the same place
void DeleteBinaryTree(TreeNode * &root);

/*
        1
       / \
      2   3
     / \
    4   5
   /
  6 
*/
TreeNode *CreateTreeNodeCase1(); 



#endif