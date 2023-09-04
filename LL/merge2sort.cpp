/*
Given two sorted linked lists consisting of N and M nodes respectively.
 The task is to merge both of the list (in-place) and return head of the merged list.
*/

 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
    // Node* a = head1;
    // Node* b = head2;
    // Node* tail;
    // Node* head;
    // if(a == NULL)
    // {
    //     return b;
    // }
    // else if(b == NULL)
    // {
    //     return a;
    // }
    // else if(a==NULL && b == NULL)
    // {
    //     return NULL;
    // }
    
    // if(b->data < a->data)
    // {
    //      head = b;
    //      tail = b;
    // }
    // else if(a->data < b->data)
    // {
    //      head =a;
    //      tail =a;
    // }
    
    // while(a!=NULL && b!=NULL)
    // {
    //     if(a->data < b->data)
    //     {
    //         tail->next = a; //DIDNT write tail = a
    //         a = a->next;
    //     }
    //     else if(b->data < a->data)
    //     {
    //         tail->next = b;
    //         b = b->next;
    //     }
    // }
    
    // if(b == NULL)
    // {
    //     tail->next = a;
    // }
    // else if(a == NULL)
    // {
    //     tail->next = b;
    // }
    
    // return head;
//Function to merge two sorted linked list.
Node* sortedMerge(Node* a, Node* b)  
{  
    // code here
    if(a==NULL) return b;
    if(b==NULL) return a;
    Node* tail = NULL; 
    Node* head = NULL;
    
    if(a->data <= b->data)
    {
        head = a;
        tail = a;
        a = a->next;
    }
    else
    {
        head = b;
        tail = b;
        b = b->next;
    }
    
    while(a!=NULL && b!=NULL)
    {
        if(a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else 
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    
    if(a == NULL)
    {
        tail->next = b;
    }
    else 
    {
        tail->next = a;
    }
    
    return head;
}  