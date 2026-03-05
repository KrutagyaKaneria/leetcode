class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* future = curr->next;

        vector<int> result(2, -1);

        int pos = 2;          // position of curr
        int first = -1;
        int last = -1;
        int mindist = INT_MAX;

        while(future != nullptr){

            if((curr->val > prev->val && curr->val > future->val) ||
               (curr->val < prev->val && curr->val < future->val)){

                if(first == -1){
                    first = pos;
                }else{
                    mindist = min(mindist, pos - last);
                }

                last = pos;
            }

            prev = curr;
            curr = future;
            future = future->next;
            pos++;
        }

        if(first == last) return {-1,-1};

        result[0] = mindist;
        result[1] = last - first;

        return result;
    }
};