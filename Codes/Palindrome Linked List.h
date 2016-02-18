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
  bool isPalindrome(ListNode* head) {
  	if (head == NULL || head->next == NULL) return true; 
		ListNode * SlowPtr = head, * FastPtr = head;
		while (FastPtr->next != NULL && FastPtr->next->next != NULL) {
			SlowPtr = SlowPtr->next;
			FastPtr = FastPtr->next->next;
		} // now SlowPtr is the mid ptr
		ListNode * NextPtr = SlowPtr->next, * HeadPtr = head, * tmp, *HeadPtr2;
		SlowPtr->next = NULL;
		while (NextPtr != NULL) { // reverse last half of list
			tmp = NextPtr->next;
			NextPtr->next = SlowPtr;
			SlowPtr = NextPtr;
			NextPtr = tmp;
		} 
		HeadPtr2 = SlowPtr;

		while (HeadPtr2->next != NULL && HeadPtr->next != NULL) {
			if (HeadPtr2->val != HeadPtr->val) return false;
			HeadPtr2 = HeadPtr2->next;
			HeadPtr = HeadPtr->next;
		}
		return true;
  }
};
