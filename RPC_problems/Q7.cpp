class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
            return head;
        head->next = removeNodes(head->next);

        if(head->next && head->val < head->next->val)
            return head->next;
        else
            return head;
    }
};