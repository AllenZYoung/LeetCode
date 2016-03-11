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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;

        ListNode* AfterHead = head->next;
        head->next = swapPairs(AfterHead->next);
        AfterHead->next = head;

        return AfterHead;
    }
};