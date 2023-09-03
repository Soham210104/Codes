/*
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.
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

class Solution{
    
    
    Node* getMid(Node* head)
    {
        Node* slow = head;
        Node* fast = head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverseList(Node* head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        
        Node* mid = getMid(head);
        
        Node* temp = mid->next;
        mid->next = reverseList(temp);
        
        Node* head1 = head;
        Node* head2 = mid->next;
        while(head2!=NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            
                head1 = head1->next;
                head2 = head2->next;
            
        }
        //retaining the original linked list
        temp = mid->next;
        mid->next = reverseList(temp);
        
        return true;
        
    }
};
