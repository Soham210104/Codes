
/*
Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List 
contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position 
of the node to which the last node is connected. If it is 0 then no loop.
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

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    
    Node* slow = head;
    Node* fast = head;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
        {
            int count = 1;
            slow=slow->next;
            while(slow!=fast)
            {
                count++;
                slow=slow->next;
            }
            return count;
        }
    }
    return 0;
    // Code here
}