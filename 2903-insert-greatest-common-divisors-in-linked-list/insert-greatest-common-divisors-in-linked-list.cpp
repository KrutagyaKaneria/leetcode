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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p1 = head;
        ListNode* p2 = head->next;

        while (p2 != NULL) {
            int a = p1->val;
            int b = p2->val;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            ListNode* gcd = new ListNode(a);
            gcd->next = p2;
            p1->next = gcd;

            p1 = p2;
            p2 = p2->next;
        }
        return head;
    }
};