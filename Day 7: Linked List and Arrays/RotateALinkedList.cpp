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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        int size=1;
        ListNode *temp=head,*start=head;
        while(temp->next!=NULL)
        {
            size++;
            temp=temp->next;
        }
        temp->next=head;
        temp=temp->next;
        k=k%size;
        int jumps = size-k-1;
        while(jumps!=0)
        {
            temp=temp->next;
            jumps--;
        }
        start=temp->next;
        temp->next=NULL;
        return start;
    }
};
