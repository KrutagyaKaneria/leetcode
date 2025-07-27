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
 #include <stack>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp1 = head;
        stack<ListNode*> st; 
        if (head == NULL || head->next == NULL) return true;


        while(temp1!=NULL){
        st.push(temp1);
        temp1=temp1->next; 
        }

        temp1=head;
        while(temp1!=NULL){
        ListNode* temp2 = st.top();
        st.pop();
         
        if(temp1->val != temp2->val){
            return false;
        }
        temp1=temp1->next;
        }
        return true;               
    }
};