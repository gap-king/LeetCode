#include "LinkedList.hpp"

ListNode *ListNode::CreateLinkedListFromVector(const vector<int> &nums)
{
    ListNode *res = nullptr;
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        ListNode *tmp = new ListNode(*it, res);
        res = tmp;
    }

    return res;
}

void ListNode::DeleteLinkedList(ListNode* &node)
{
    if (node == nullptr) {
        return;
    }
    DeleteLinkedList(node->next);
    if (node->next == nullptr) {
        delete node;
        node = nullptr;
    }
    return;
}