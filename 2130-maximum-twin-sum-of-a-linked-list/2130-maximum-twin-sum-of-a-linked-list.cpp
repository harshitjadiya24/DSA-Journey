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
        vector<int>arr;
        ListNode* temp = head;
        while(temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        int i = 0, j = n - 1;
        int maxSum = INT_MIN;
        while(i < j)
        {
            maxSum = max(maxSum, arr[i] + arr[j]);
            i++, j--;
        }
        return maxSum;
    }
};