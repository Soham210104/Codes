/*
Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller 
than or equal to length of the linked list.
*/

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* t3 = head;
        Node* t1 = head;
        Node* t2 = head;
        int count = 0;
        if(head==NULL)
        {
            return head;
        }
        else
        {
            while(t3->next!=NULL)
            {
            t3 = t3->next;
            }
            
            while(count<k)
            {
                t2 = t1->next;
                t1->next = NULL;
                t3->next = t1;
                t3 = t1;
                head = t2;
                t1 = head;
                count++;
            }
            
            return head;
        
        }
        
    }
};
    