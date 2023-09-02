/*
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
*/

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node* t = head;
           int count = 1;
           while(t->next!=NULL)
           {
               t = t->next;
               count++;
           }
           if(n>count)
           {
               return -1;
           }
           else
           {
               t = head;
               for(int i=1;i<count-n+1;i++)
               {
                   t = t->next;
               }
               
               return t->data;
           }
    }
};
