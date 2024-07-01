class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverse(Node* head){
        Node* temp = head;
        Node* prev = NULL;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        while(temp!=NULL){
            head = temp->next;
            temp->next = prev;
            prev = temp;
            temp = head;
        }
        
        head = prev;
        return head;
    }
    
     struct Node* addTwoLists(struct Node* num1, struct Node* num2) {
        // Reverse the input lists
        num1 = reverse(num1);
        num2 = reverse(num2);

        Node* sum = NULL;
        int carry = 0;

        while (num1 != NULL || num2 != NULL || carry) {
            int newData = carry;

            if (num1) {
                newData += num1->data;
                num1 = num1->next;
            }

            if (num2) {
                newData += num2->data;
                num2 = num2->next;
            }

            carry = newData / 10;
            newData = newData % 10;

            // Create a new node with the sum data
            Node* newNode = new Node(newData);
            newNode->next = sum;
            sum = newNode;
        }

         while (sum != NULL && sum->data == 0) {
            Node* temp = sum;
            sum = sum->next;
            delete temp;
        }
        
        if (sum == NULL) {
            return new Node(0);
        }

        return sum;
    }

};