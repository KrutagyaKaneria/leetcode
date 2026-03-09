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
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        int maxsum = 0;
        int sum =0;
        stack<int> st;


       while(fast && fast->next){
            st.push(slow->val);
            fast = fast->next->next;
            slow = slow->next;
        }

        while(slow){
            int twin = st.top();
            st.pop();
            sum = twin + slow->val;

            if(maxsum < sum){
                maxsum = sum;
            }
            slow=slow->next;
        }
         return maxsum;
    }
}
;