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
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  	if (l1 == NULL) return l2;
  	if (l2 == NULL) return l1;
  	ListNode * Dummy = new ListNode(-1), *Ptr = Dummy, *l1Ptr = l1, *l2Ptr = l2;
  	while (l1Ptr != NULL && l2Ptr != NULL) {
  		if (l1Ptr->val <= l2Ptr->val) {
  			Ptr->next = l1Ptr;
  			l1Ptr = l1Ptr->next;
  		} else {
  			Ptr->next = l2Ptr;
  			l2Ptr = l2Ptr->next;
  		}
  		Ptr = Ptr->next;
  	}

  	Ptr->next = (l1Ptr != NULL) ? l1Ptr : l2Ptr;
  	return Dummy->next;
  }
};
