#include <queue>
#include <utility>

#include "MinimumDepthOfBinaryTree_111.hpp"

int MinimumDepthOfBinaryTree::operator()(TreeNode *root)
{
    using NodeInfo = std::pair<TreeNode *, int>; // store node and its depth
    std::queue<NodeInfo> nodes;
    nodes.push({root, 1});

    int res = 0;
    while (!nodes.empty()) {
        if (nodes.front().first == nullptr) {
            nodes.pop();
            continue;
        }

        if (nodes.front().first -> m_left == nullptr && nodes.front().first -> m_right == nullptr) { // found
            res = nodes.front().second;
            break;
        }
        nodes.push({nodes.front().first->m_left, nodes.front().second + 1});
        nodes.push({nodes.front().first->m_right, nodes.front().second + 1});

        nodes.pop();
    }
    return res;
}