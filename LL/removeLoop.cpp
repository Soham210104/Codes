/*Given a linked list of N nodes such that it may contain a loop.
A loop here means that the last node of the link list is connected to the node at position X(1-based index).
 If the link list does not have any loop, X=0.
Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop*/
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {

       Node* slow = head;
       Node* fast = head;
       
       while(slow != NULL && fast != NULL && fast->next != NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
           if(slow == fast) break;
       }
       
       if(slow != fast) 
       {
           return ;
       }
       
       slow = head;
       
       while(slow != fast)
       {
           slow = slow->next;
           fast = fast->next;
       }
       
       Node* curr = slow;
       while(slow->next != curr)
       {
           slow = slow->next;
       }
       
       slow->next = NULL;
       return;
   
    }
};