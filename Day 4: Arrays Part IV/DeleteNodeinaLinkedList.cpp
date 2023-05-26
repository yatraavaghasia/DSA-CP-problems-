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
    void deleteNode(ListNode* node) {
        ListNode * current = node;
        ListNode * prev = node;
        int temp;
        if(current->next!=NULL)
        {
            current = current->next;
            temp = current->val;
            prev->val=temp;
        }
        if(current->next!=NULL)
        {
            prev->next=current->next;
        }
        else
        {
            prev->next=NULL;
        }
    }
};
