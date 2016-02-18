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
  ListNode* removeElements(ListNode* head, int val) {
  	ListNode * Dummy;
  	Dummy->next = head;
    ListNode * WalkerPtr = Dummy;

    while (WalkerPtr->next != NULL) {
    	if (WalkerPtr->next->val == val) {
    		WalkerPtr->next = WalkerPtr->next->next;
    	} else {
    		WalkerPtr = WalkerPtr->next;
    	}
    }
    return Dummy->next;
  }
};
