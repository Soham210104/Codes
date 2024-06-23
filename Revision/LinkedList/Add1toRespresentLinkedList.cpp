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
    
    
    Node* addOne(Node *head) 
    {
        
        head = reverse(head);
        
        Node* temp = head;
        int carry = 1;
        
        while(temp!=NULL){
            int sum = temp->data + carry;
            temp->data = sum%10;
            carry = sum/10;
            
            if(!temp->next && carry>0){
                temp->next = new Node(carry);
                carry = 0;
            }
            
            temp = temp->next;
        
        }
        
        head = reverse(head);
        return head;
    }
};