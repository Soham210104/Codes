void MyStack ::push(int x) {
    // Your Code
   if(top>1000){
       cout<<"Stack overflow"<<endl;
   }
   top++;
   arr[top] = x;
    
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top<0){
        return -1;
    }
    int x = arr[top--];
    return x;
}