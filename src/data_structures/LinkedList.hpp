#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "src/utilities/CommonHeaders.hpp"

/**
 * @brief singly-linked list
 */
struct ListNode
{
    int val;
    ListNode *next;
    
    ListNode(): val(0), next(nullptr) {}

    ListNode(int val): val(val), next(nullptr) {}

    ListNode(int val, ListNode *next): val(val), next(next) {}

    // If the nums in vector is {a, b, c}, then the linked list created is a → b → c
    static ListNode *CreateLinkedListFromVector(const vector<int> &nums);

    // Delete a linked list. You must input the start node of a linked list.
    static void DeleteLinkedList(ListNode* &node);
};

#endif