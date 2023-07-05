#include <bits/stdc++.h> 
void insertSorted(stack<int>& stack, int target)
{
	//Base cases
	if(stack.empty())
	{
		stack.push(target);
		return;
	}
	if(stack.top()>=target)
	{
		stack.push(target);
		return;
	}
	//operation performed
	int top=stack.top();
	stack.pop();
	//recursive call
	insertSorted(stack,target);
	//backtracking
	stack.push(top);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	//Base case
	if(stack.empty())
	{
		return;
	}
	//operations performed
	int top=stack.top();
	stack.pop();
	//recursive call
	sortStack(stack);
	//sorting the stack
	insertSorted(stack,top);
}