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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0, j = arr.size() - 1;
        while(k != 1)
        {
            k--;
            i++; j--;
        }
        swap(arr[i], arr[j]);
        head = new ListNode(arr[0]);
        ListNode* temp1 = head;
        for(int i = 1; i < arr.size(); i++)
        {
            temp1->next = new ListNode(arr[i]);
            temp1 = temp1->next;
        }
        return head;
    }
};