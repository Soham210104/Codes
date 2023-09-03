/*
Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.
*/

/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
    
    Node* findMid(Node* head)
    {
        Node* slow = head;
        Node* fast = head->next->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
    
    Node* merge(Node* left,Node* right)
    {
        if(left == NULL)
        {
            return right;
        }
        if(right == NULL)
        {
            return left;
        }
        
        Node* ans = new Node(0);
        Node* temp = ans;
        while(left!=NULL && right!=NULL)
        {
            if(left->data < right->data)
            {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        
        while(left!=NULL)
        {
                temp->next = left;
                temp = left;
                left = left->next; 
        }
        
        while(right!=NULL)
        {
                temp->next = right;
                temp = right;
                right = right->next;
        }
        
        ans = ans->next;
        return ans;
    }
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) 
    {
        // your code here
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        //finding the mid of the linke dlist to divide it into two halves
        Node* mid = findMid(head);
        
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL; 
        //recursive calls tp sort the linkedlist
        left = mergeSort(left);
        right = mergeSort(right);
        
        //merge the left and right
        Node* result = merge(left,right);
        
        return result;
    }
};