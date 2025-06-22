class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);         // Dummy node to simplify list operations
        ListNode* tail = &dummy;   // Tail pointer to build the merged list

        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining part (if any)
        tail->next = list1 ? list1 : list2;

        return dummy.next;
    }
};
