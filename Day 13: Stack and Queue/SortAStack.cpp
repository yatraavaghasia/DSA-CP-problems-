#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack, int current)
{
	if(stack.empty()||stack.top()<current)
	{
		stack.push(current);
		return;
	}
	int top = stack.top();
	stack.pop();
	sortedInsert(stack,current);
	stack.push(top);
	return;
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty())
	return;

	int top = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack,top);
}
