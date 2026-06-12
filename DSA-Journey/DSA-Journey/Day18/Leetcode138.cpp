#include <iostream>
using namespace std;

struct Node
{
  int val;
  Node *next;
  Node *random;

  Node(int x)
  {
    val = x;
    next = NULL;
  }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        m[head] = newHead;

        while(oldTemp != NULL) {
            Node* copy = new Node(oldTemp->val);

            m[oldTemp] = copy;
            newTemp->next = copy;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;

        while(oldTemp != NULL) {
            newTemp->random = m[oldTemp->random];

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};