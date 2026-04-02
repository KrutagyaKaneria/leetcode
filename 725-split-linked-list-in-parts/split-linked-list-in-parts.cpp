class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        vector<ListNode*> result(k, NULL);

        // Step 1: find length
        int n = 0;
        ListNode* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }

        // Step 2: calculate sizes
        int partSize = n / k;
        int extra = n % k;

        ListNode* curr = head;

        // Step 3: split
        for(int i = 0; i < k; i++){

            if(curr == NULL){
                result[i] = NULL;
                continue;
            }

            result[i] = curr;

            int size = partSize + (extra > 0 ? 1 : 0);
            extra--;

            // move to end of current part
            for(int j = 1; j < size; j++){
                curr = curr->next;
            }

            // break the list
            ListNode* nextPart = curr->next;
            curr->next = NULL;

            curr = nextPart;
        }

        return result;
    }
};