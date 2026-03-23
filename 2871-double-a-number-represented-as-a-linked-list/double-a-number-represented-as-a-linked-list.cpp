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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp){
            ListNode* node = temp->next;
            temp->next = prev ;
            prev = temp;
            temp = node;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* you = dummy;
        int carry = 0;
        while(prev || carry){
            int sum = carry;
            if(prev){
                sum += prev->val *2;
                prev = prev->next;
            }

            you->next = new ListNode(sum%10);
            you = you->next;
            carry = sum/10;
        }

        ListNode* temp1 = dummy->next;
        ListNode* prev1 = nullptr;
        while(temp1){
            ListNode* node = temp1->next;
            temp1->next = prev1;
            prev1 = temp1;
            temp1 = node;
        }
        return prev1;
    }
};