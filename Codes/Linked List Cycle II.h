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
    ListNode *detectCycle(ListNode *head) {
        ListNode * SlowPtr = head, *FastPtr = head;
		while (FastPtr != NULL && FastPtr->next != NULL) {
			SlowPtr = SlowPtr->next;
			FastPtr = FastPtr->next->next;
			if (SlowPtr == FastPtr) {
				ListNode *WalkerPtr = head;
				while (WalkerPtr != SlowPtr) {
					WalkerPtr = WalkerPtr->next;
					SlowPtr = SlowPtr->next;
				}
				return WalkerPtr;
			}
		}
		return NULL;
  }
};
