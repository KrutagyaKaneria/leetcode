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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* temp = &dummy;

        while(temp->next && temp->next->next){
            ListNode* slow = temp->next;
            ListNode* fast = temp->next->next;
            slow->next=fast->next;
            fast->next=slow;
            temp->next=fast;
            temp=slow;
        }
        return dummy.next;
    }
};