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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        vector<int> arr;
        while(temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        int i = left - 1, j = right - 1;
        while(i < j)
        {
            swap(arr[i], arr[j]);
            i++; j--;
        }
        head = new ListNode(arr[0]);
        ListNode* temp1 = head;
        for(int i = 1; i < n; i++)
        {
            temp1->next = new ListNode(arr[i]);
            temp1 = temp1->next;
        }
        return head;
    }
};