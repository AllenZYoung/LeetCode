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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
  	ListNode * Dummy;
  	Dummy->next = head;
  	ListNode * ptr1 = Dummy, *ptr2 = Dummy;
  	for (int i = 0; i < n; i++) ptr2 = ptr2->next;
  	// if (ptr2 == NULL) return head.next; // now head is the Nth node from end;
  	while (ptr2->next != NULL) {
  		ptr1 = ptr1->next;
  		ptr2 = ptr2->next;
  	}
  	ListNode *tmp = ptr1->next;
  	//now ptr2->next is the node to be deleted
  	ptr1->next = ptr1->next->next;
  	delete tmp;
  	return Dummy->next; 
  }
};
