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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
      if (m == n) return head;
      n -= m;
      ListNode Dummy(0);
      Dummy.next = head;
      ListNode* ptr = &Dummy;
      while (--m) ptr = ptr->next;

      ListNode* reversePtr = ptr->next;
      while (n--) {
        ListNode * tmp = reversePtr->next;
        reversePtr->next = tmp->next;
        tmp->next = ptr->next;
        ptr->next = tmp;
      }

      return Dummy.next;
    }
};