/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL) // the list is empty of only have one elem.
      return head;
    ListNode * p, * q, * r;
    p = head, q = head->next, head->next = NULL;;
    while (q != NULL) {
      r = q->next;
      q->next = p;
      p = q;
      q = r;
    }

    head = p;
    return head;
  }
};
