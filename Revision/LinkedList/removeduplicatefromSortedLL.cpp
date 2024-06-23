

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