#include "AddTwoNumbers_2.hpp"

ListNode *AddTowNumbers::operator()(ListNode *l1, ListNode *l2)
{
    // Two pointers point to a same place. One can change memory and address, while the other keeps the initial address unchanged.
    ListNode *res = new ListNode;
    ListNode *preNode = res;
    int nextVal = 0;
    while (l1 != nullptr || l2 != nullptr) {
        int num1 = 0;
        if (l1 != nullptr) {
            num1 = l1->val;
            l1 = l1->next;
        }
        int num2 = 0;
        if (l2 != nullptr) {
            num2 = l2->val;
            l2 = l2->next;
        }
        int curVal = (num1 + num2 + nextVal) % 10;
        nextVal = (num1 + num2 + nextVal) / 10;
        ListNode *curNode = new ListNode(curVal);
        preNode->next = curNode;
        preNode = curNode;
    }
    if (nextVal != 0) {
        ListNode *curNode = new ListNode(nextVal);
        preNode->next = curNode;
    }
    return res->next;
}