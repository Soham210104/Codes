
/*
Given a singly linked list of size N, and an integer K. You need to swap the
Kth node from the beginning and Kth node from the end of the linked list.
Swap the nodes through the links. Do not change the content of the nodes.
*/
//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int N, int K)
{
    if(K>N)
    {
        return head;
    }
    if(K==(N-K+1))
    {
        return head;
    }
    
    Node* start = head;
    Node* start_prev=NULL;
    for(int i=1;i<K;i++)
    {
        start_prev = start;
        start = start->next;
    }
    Node* end = head;
    Node* end_prev=NULL;
    for(int i=1;i<N-K+1;i++)
    {
        end_prev = end;
        end = end->next;
    }
    
    if(start_prev!=NULL)
    {
        start_prev->next = end;
    }
    if(end_prev!=NULL)
    {
        end_prev->next = start;
    }
    
    Node* temp = start->next;
    start->next = end->next;
    end->next = temp;
    
    if(K==1)//if start_prev is NULL
    {
        head = end;
    }
    if(K==N)//if end_prev is NULL
    {
        head = start;
    }
    
    return head;
}