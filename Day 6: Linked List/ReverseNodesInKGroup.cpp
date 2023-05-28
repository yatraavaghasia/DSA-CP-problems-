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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head, *slow = head, *fast = head;
        int size = 0;
        int t;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        int jumps=k-1,skips=k/2;
        for(int j=1;j<=(size/k);j++)
        {
            skips=k/2;
            jumps=k-1;
            while(jumps>=0)
            {
                int l = jumps;
                while(l!=0)
                {
                    fast=fast->next;
                    l--;
                }
                t=fast->val;
                fast->val=slow->val;
                slow->val=t;

                slow=slow->next;
                fast=slow;

                jumps=jumps-2;
            }
            for(int i=1;i<=skips;i++)
            {
                slow=slow->next;
            }
            fast=slow;
        }
        return head;
    }
};
