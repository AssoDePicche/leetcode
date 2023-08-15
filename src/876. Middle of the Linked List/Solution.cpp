#include "./Solution.hpp"

ListNode *Solution::middleNode(ListNode *head)
{
  ListNode *slowPointer = head;

  while (head != nullptr && head->next != nullptr)
  {
    slowPointer = slowPointer->next;

    head = head->next->next;
  }

  return slowPointer;
}
