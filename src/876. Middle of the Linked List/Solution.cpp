#include "./Solution.hpp"

ListNode *Solution::middleNode(ListNode *head)
{
  int listSize = 0;

  int middle = 0;

  ListNode *begin = head;

  ListNode *nextNode = nullptr;

  while (begin->next != nullptr)
  {
    nextNode = begin->next;

    begin = nextNode;

    ++listSize;
  }

  middle = (listSize % 2 == 0) ? (listSize / 2) : (listSize / 2) + 1;

  while (middle != 0)
  {
    nextNode = head->next;

    head = nextNode;

    --middle;
  }

  return head;
}
