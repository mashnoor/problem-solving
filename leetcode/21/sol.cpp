#include <iostream>

using namespace std;

struct ListNode {
     int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    if(list1 == nullptr && list2 == nullptr) return nullptr;
    ListNode* firstNode = nullptr;
    ListNode* lastNode = nullptr;

    while (list1!=nullptr || list2!=nullptr)
    {
        ListNode* currentNode = new ListNode();
        if(list1 != nullptr && list2 == nullptr)
        {
            currentNode->val = list1->val;
            list1 = list1->next;
        }
        else if(list1 == nullptr && list2 != nullptr)
        {
            currentNode->val = list2->val;
            list2 = list2->next;
        }
        else
        {
            if(list1->val < list2->val)
            {
                currentNode->val = list1->val;
                list1 = list1->next;
            }
            else
            {
                currentNode->val = list2->val;
                list2 = list2->next;
            }
        }

        if(firstNode == nullptr)
        {
            lastNode = currentNode;
            firstNode = lastNode;
        }
        else
        {
            lastNode->next = currentNode;
            lastNode = currentNode;
        }
    }

    return firstNode;
    

}