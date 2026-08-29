class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;

        // Find length
        int n = 1;
        ListNode* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
            n++;
        }

        // Reduce unnecessary rotations
        k = k % n;

        if(k == 0)
            return head;

        // Make the list circular
        temp->next = head;

        // Find new tail
        temp = head;
        for(int i = 1; i < n - k; i++)
        {
            temp = temp->next;
        }

        // New head
        head = temp->next;

        // Break the circle
        temp->next = NULL;

        return head;
    }
};