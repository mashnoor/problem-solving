/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int mx = 10000+1;
    bool hasCycle(ListNode *head) 
    {
        
        while(head != nullptr)
        {
            if(head->val == mx) return true;
            head->val = mx;
            head = head->next;
        }
        
        return false;
    }
};