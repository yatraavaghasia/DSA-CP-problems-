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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *cur1 = list1;
        ListNode* cur2 = list2;
        ListNode *cur3 = NULL;
        ListNode* head;
        if(cur1==NULL)
        {
            return cur2;
        }
        else if(cur2==NULL)
        {
            return cur1;
        }
        if((cur1->val)<(cur2->val))
        {
            cur3 = cur1;
            cur1 = cur1 -> next;
        }
        else
        {
            cur3 = cur2;
            cur2 = cur2 -> next;
        }
        head = cur3;
        while(cur1 && cur2)
        {
            if((cur1->val)<(cur2->val))
            {
                cur3->next = cur1;
                cur1 = cur1->next;
            }
            else
            {
                cur3->next= cur2;
                cur2 = cur2->next;
            }
            cur3 = cur3->next;
        }
        if(!cur1)
        {
            cur3 -> next = cur2;
        }
        else
        {
            cur3 -> next = cur1;
        }
        return head;
    }
};
