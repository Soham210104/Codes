void MyStack ::push(int x) 
{
    // Your Code
    StackNode* temp = new StackNode(x);
    
    if(!temp){
        return;
    }
    
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    StackNode* temp;
    if(top==NULL){
        return -1;
    }
    
    temp = top;
    top = top->next;
    
     int poppedData = temp->data;
    delete temp;
    
    return poppedData;
}