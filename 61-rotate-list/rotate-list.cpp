/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        k = k % length;
        if (k == 0) return head;

        while (k > 0) {
            ListNode* tail = head;
            while (tail->next && tail->next->next != NULL) {
                tail = tail->next;
            }

            ListNode* last = tail->next;
            last->next = head;           
            head = last;                 
            tail->next = NULL;           

            k--;
        }

        return head;
    }
};
