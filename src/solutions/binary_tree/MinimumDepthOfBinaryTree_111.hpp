#include "src/utilities/CommonHeaders.hpp"
#include "src/data_structures/TreeNode.hpp"


/**
 * @brief Not same with maximum depth
 * @details
 * Further simplified to finding the first leaf node through BFS.
 * Also, you should always remember the connection between BFS and Queue.
 */

class MinimumDepthOfBinaryTree {
public:
    int operator()(TreeNode *root);
};