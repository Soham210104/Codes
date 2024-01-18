void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* temp = new QueueNode(x);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next = temp;
        rear = temp;
}

//Function to pop front element from the queue.
int MyQueue::pop()
{
    if (front == NULL)
    {
        return -1;
    }

    QueueNode* t = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    int ans = t->data;
    delete t;  // Free the memory of the popped node
    return ans;
}
