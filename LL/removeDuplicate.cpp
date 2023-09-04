/*Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. The nodes are arranged in a sorted way.*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* curr = head;
 while(curr!=NULL && curr->next!=NULL)
 {
     if(curr->data != curr->next->data)
     {
         curr = curr->next;
     }
     else
     {
         Node* temp = curr->next;
         curr->next = curr->next->next;
         delete(temp);
     }
 }
 return head;
}