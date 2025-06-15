// 876. Middle of the Linked List

struct ListNode final {
  int val;

  ListNode *next;

  ListNode() : val(0), next(nullptr) {}

  ListNode(int val) : val(val), next(nullptr) {}

  ListNode(int val, ListNode *next) : val(val), next(next) {}
};

ListNode *middleNode(ListNode *head) {
  ListNode *slowPointer = head;

  while (head != nullptr && head->next != nullptr) {
    slowPointer = slowPointer->next;

    head = head->next->next;
  }

  return slowPointer;
}
