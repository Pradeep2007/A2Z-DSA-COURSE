#include <bits/stdc++.h> 
void sortedInsert(stack<int>&s,int element){
	if(s.empty() || (!s.empty() && s.top()<element)){
		s.push(element);
		return;
	}
	int num=s.top();
	s.pop();

	sortedInsert(s,element);
	s.push(num);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack,num);
}