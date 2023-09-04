/*
Given a linked list of N nodes. The task is to reverse this list.
*/


/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        Node* p = NULL;
        Node* n = NULL;
        while(head!=NULL)
        {
            n = head->next;
            head->next = p;
            p = head;
            head = n;
        }
        head = p;
        
        // return head of reversed list
    }
    
};
    