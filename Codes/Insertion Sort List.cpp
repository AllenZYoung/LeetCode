class Solution { 
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* Dummy = new ListNode(0);
        Dummy -> next = head;
        ListNode* pre = Dummy;
        ListNode* cur = Dummy->next;// which is just head
        while (cur) {// cur != NULL
            if (cur -> next && cur -> next -> val < cur -> val) {
                while (pre -> next && pre -> next -> val < cur -> next -> val)
                    pre = pre -> next;
                //Now we get where to insert. Insert cur -> next after pre.
                ListNode* tmp = pre -> next;
                pre -> next = cur -> next;
                cur -> next = cur -> next -> next;
                pre -> next -> next = tmp;
                /* Move pre back to Dummy. */
                pre = Dummy;
            }
            else cur = cur -> next;
        }
        return Dummy->next;
    }
};