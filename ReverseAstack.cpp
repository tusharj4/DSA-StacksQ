void insertAtBottom(stack<int>& stack,int target)
{
    if(stack.empty())
    {
        stack.push(target);
        return;
    }
    int temp=stack.top();
    stack.pop();
    insertAtBottom(stack,target);
    stack.push(temp);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())
    {
        // cout<<"The stack is empty"<<endl;
        return;
    }
    int top=stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,top);
}