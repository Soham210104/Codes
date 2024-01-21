void QueueStack :: push(int x)
{
        // Your Code
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{

        if (q1.empty()) {
            // Return some sentinel value or handle the empty stack case
            return -1;
        }

        // Get the top element from q1
        int topElement = q1.front();
        
        // Remove the top element from q1
        q1.pop();

        // Return the top element
        return topElement;
}
