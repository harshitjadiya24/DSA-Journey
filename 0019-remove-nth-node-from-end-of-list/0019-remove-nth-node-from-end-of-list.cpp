class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* prev = new ListNode(0);
        prev->next = head;

        int count = 0;

        while(temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        ListNode* temp1 = head;
        ListNode* prev1 = prev;

        int count1 = 0;

        while(count1 != count - n)
        {
            temp1 = temp1->next;
            prev1 = prev1->next;
            count1++;
        }

        prev1->next = temp1->next;
        delete temp1;

        return prev->next;
    }
};