class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* real = NULL;

        if (!list1) return list2;
        if (!list2) return list1;

        if (list1->val <= list2->val) {
            head = list1;
            list1 = list1->next;
        } else {
            head = list2;
            list2 = list2->next;
        }
        real = head;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                real->next = list1;
                list1 = list1->next;
            } else {
                real->next = list2;
                list2 = list2->next;
            }
            real = real->next;
        }

        if (list1) real->next = list1;
        else real->next = list2;

        return head;
    }
};
