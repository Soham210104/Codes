class Solution
{
    public:
    
     Node* reverse(Node* head){
        if(!head){
            return head;
        }
        Node* prev = NULL;
        Node* temp = head;
        
        
        while(temp!=NULL){
            head  = temp->next;
            temp->next = prev;
            prev = temp;
            temp = head;
        }
        head = prev;
        return head;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        head = reverse(head);
        Node* curr = head;
        int ma = head->data;
        Node* prev = head;
        head = head->next;
        
        while(head!=NULL){
            if(head->data >= ma){
                ma = head->data;
                prev = head;
                head = head->next;
            }else{
                prev->next = head->next;
                head = prev->next;
            }
        }
        
        head = reverse(curr);
        return head;
    }
    
};