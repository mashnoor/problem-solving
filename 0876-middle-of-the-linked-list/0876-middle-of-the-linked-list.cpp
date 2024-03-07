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
    ListNode* middleNode(ListNode* head)
    {
        vector<ListNode*> data;
        int cnt = 0;
        while(head != nullptr)
        {
            data.push_back(head);
            cnt++;
            head = head->next;
        }
        
       
        return data[cnt/2 ];            
        
        
    }
};