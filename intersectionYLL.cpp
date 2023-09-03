/*
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.
*/

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
    /*Brute Force
    if(head1 == NULL || head2 ==NULL)
    {
        return -1;
    }
    while(head2!=NULL)
    {
        Node* temp = head1;
        while(temp->next!=NULL)
        {
            if(temp->next == head2->next)
            {
                return temp->next->data;
            }
            else
            {
                temp = temp->next;
            }
        }
        head2 = head2->next;
    }
    return -1;
    */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
   Node* ptr1 = head1;
   Node* ptr2 = head2;
   int c1 =0,c2=0;
   while(ptr1!=NULL)
   {
       ptr1 = ptr1->next;
       c1++;
   }
   while(ptr2!=NULL)
   {
       ptr2 = ptr2->next;
       c2++;
   }
   ptr1 = head1;
   ptr2 = head2;
   int d = abs(c1-c2);
   
   if(c1>c2)
   {
       for(int i=0;i<d;i++)
       {
           ptr1 = ptr1->next;
       }
   }
   else if(c2>c1)
   {
       for(int i=0;i<d;i++)
       {
           ptr2 = ptr2->next;
       }
   }
   
   while(ptr1!=ptr2)
   {
       ptr1 = ptr1->next;
       ptr2 = ptr2->next;
   }
   
   if(ptr1!=NULL)
   {
       return ptr1->data;
   }
   
   return -1;
   
}