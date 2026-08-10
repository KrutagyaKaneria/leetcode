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
    ListNode* partition(ListNode* head, int x) {

        ListNode less_head(0);
        ListNode greater_head(0);

        ListNode* less = &less_head;
        ListNode* greater = &greater_head;

        ListNode* temp = head;

        while(temp != NULL){
            if(temp->val >= x){
                greater -> next = temp ;
                greater = greater -> next;
            }else{
                less -> next = temp;
                less = less -> next;
            }
            temp = temp -> next;
        }
        greater->next = nullptr;       
        less->next = greater_head.next;
        return less_head.next;
    }
};