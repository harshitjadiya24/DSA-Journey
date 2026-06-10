#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;

  ListNode(int x)
  {
    val = x;
    next = NULL;
  }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != NULL){
            if(temp == temp->next){
                temp = temp->next;
                temp->next = NULL;
            }
        }
        return temp;
    }
};