/*
Given two decimal numbers represented by two linked lists of size N and M respectively. 
The task is to return a linked list that represents the sum of these two numbers.
For example, the number 190 will be represented by the linked list, 
1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which
 will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.
*/

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    void reverse(struct Node* &list)
    {
        Node* p = NULL;
        Node* n = NULL;
        while(list!=NULL)
        {
            n = list->next;
            list->next = p;
            p = list;
            list = n;
        }
        list = p;
        
    }
    
    void insert(struct Node* &head,struct Node* &tail,int val)
    {
        Node* temp = new Node(val);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    struct Node* addition(struct Node* first,struct Node* second)
    {
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first!=NULL || second!=NULL || carry!=0)
        {
            int val1=0;
            if(first!=NULL)
            {
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL)
            {
                val2=second->data;
            }
            
            int sum = carry+val1+val2;
            int digit = sum%10;
            
            Node* dummy = new Node(digit);
            insert(ansHead,ansTail,digit);
            carry = sum/10;
           
            if(first!=NULL)
            {
            first = first->next;
            }
            if(second!=NULL)
            {
            second = second->next;
            }
        }
        return ansHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        reverse(first);
        reverse(second);
        
        Node* ans = addition(first,second);
        
        reverse(ans);
        
        return ans;
    }
};