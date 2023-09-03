//User function template for C++
/*Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.*/
/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* temp = new Node(head->data);
        Node* curr = head;
        while(curr!=NULL)
        {
            if(curr->next==NULL)
            {
                return false;
            }
            if(curr->next == temp)
            {
                return true;
            }
            
            Node* curr_next = curr->next;
            curr->next = temp;
            curr = curr_next;
        }
        return false;
    }
};