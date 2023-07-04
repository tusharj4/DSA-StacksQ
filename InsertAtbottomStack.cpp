//Insert an element at the bottom of a stack
//Question link->"https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=1"

void ins(stack<int>& myStack, int target)
{
    if(myStack.empty())
    {
        myStack.push(target);
        return;
    }
    //take out the top element and store it in the temporary variable and then pop
    int temp=myStack.top();
    myStack.pop();
    ins(myStack,target);//recursive call so as to empty tthe stack
    myStack.push(temp);//reverse the operations performed 
}
void pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    if(myStack.empty())
    {
        cout<<"The stack is empty"<<endl;
        return;
        // return myStack ;
    }
    ins(myStack, x);
    // return myStack;
}
