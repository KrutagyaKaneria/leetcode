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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0); // dummy node before head
        dummy->next = head;
        
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move first pointer n+1 steps ahead
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }
        
        // Move both pointers together until first reaches the end
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        
        // Skip the target node
        second->next = second->next->next;
        
        return dummy->next;
    }
};
