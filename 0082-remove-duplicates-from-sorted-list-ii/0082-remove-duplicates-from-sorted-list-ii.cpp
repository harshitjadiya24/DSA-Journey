class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* temp = head;

        while(temp != NULL)
        {
            if(temp->next != NULL && temp->val == temp->next->val){
                int val = temp->val;

                while(temp != NULL && temp->val == val){
                    ListNode* del = temp;
                    temp = temp->next;
                    delete del;
                }

                prev->next = temp;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};