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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for(ListNode* tempA = headA; tempA != NULL; tempA = tempA->next){
            for(ListNode* tempB = headB; tempB != NULL; tempB = tempB->next){
                if(tempA == tempB){
                    return tempA; // ✅ Node of intersection
                }
            }
        }
        return NULL;
    }
};

