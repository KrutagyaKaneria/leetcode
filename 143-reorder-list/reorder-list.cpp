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
    void reorderList(ListNode* head) {        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        stack<ListNode*> st;

        ListNode* temp = slow;
        while(temp){
            st.push(temp);
            temp = temp->next;
        }

        ListNode* curr = head;

        while(!st.empty()){
            ListNode* top = st.top();
            st.pop();

            if(curr == top || curr->next == top){
                top->next = NULL;
                break;
            }

            ListNode* nextNode = curr->next;
            curr->next = top;
            top->next = nextNode;
            curr = nextNode;
        }
    }
};