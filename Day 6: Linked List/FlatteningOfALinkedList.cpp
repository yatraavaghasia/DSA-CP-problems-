

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node * MergeTwoLists(Node *a, Node *b)
{
    Node *dummy = new Node(0);
    Node *temp = dummy;
    
    while(a && b)
    {
        if(a->data < b->data)
        {
            temp->bottom=a;
            a=a->bottom;
        }
        else
        {
            temp->bottom=b;
            b=b->bottom;
        }
        temp=temp->bottom;
    }
    if(a)
    {
        temp->bottom=a;
    }
    else
    {
        temp->bottom=b;
    }
    return dummy->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL||root->next==NULL)
   {
       return root;
   }
   Node *head = root;
   head->next=flatten(head->next);
   head=MergeTwoLists(head,head->next);
   return head;
}
