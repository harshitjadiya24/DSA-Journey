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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        vector<int> d;
        ListNode* temp = head->next;
        ListNode* prev = head;
        int count = 1;
        while(temp->next != NULL)
        {
            count++;
            if((temp->val < temp->next->val && temp->val < prev->val) || (temp->val > temp->next->val && temp->val > prev->val))
            {
                arr.push_back(count);
            }
            prev = prev->next;
            temp = temp->next;
        }
        int n = arr.size();
        if (n < 2)
            return {-1, -1};
        int min_dist = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            min_dist = min(min_dist, arr[i] - arr[i - 1]);
        }
        d.push_back(min_dist);
        d.push_back(arr[n - 1] - arr[0]);
        return d;
    }
};