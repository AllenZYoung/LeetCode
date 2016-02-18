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
	bool hasCycle(ListNode *head) {
		ListNode * SlowPtr = head, *FastPtr = head;
		while (FastPtr != NULL && FastPtr->next != NULL) {
			SlowPtr = SlowPtr->next;
			FastPtr = FastPtr->next->next;
			if (SlowPtr == FastPtr) 
				return true;
		}
		return false;
	}
};
