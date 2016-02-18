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
  ListNode* deleteDuplicates(ListNode* head) {
  	if (head == NULL || head->next == NULL) return head;
  	ListNode * WalkerPtr = head;
  	while (WalkerPtr->next) {
  		if (WalkerPtr->next->val == WalkerPtr->val) {
  			WalkerPtr->next  = WalkerPtr->next->next;
  		} else {
  			WalkerPtr = WalkerPtr->next;
  		}
  	}     
  	return head;
  }
};
