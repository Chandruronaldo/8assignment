#include <iostream>
using namespace std;
#define SIZE 50
int stack[SIZE],top;

void inistack()
{
	top=-1;
}

int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}

int isfull()
{
	if(top==SIZE-1)
	return 1;
	else
	return 0;
}

void push(int n)
{
	if(isfull())
	{
		cout<<"\n The STACK is FULL";
	    return;
	}
	++top;
	stack[top]=n;
	
}

void pop()
{
	if(isempty())
	{
		cout<<"\nStack is empty";
		return;
	}
	top--;
}

void display()
{
	if(isempty())
	{
		cout<<"\nstack is empty";
		return;
	}
	for(int i=top;i>=0;i--)
	{cout<<stack[i]<<"-->";}
	cout<<"BASE\n";
	
}

int main() {
	int n;
	inistack();
	push(1);
            push(2);
 	push(3);
	display();
	pop();
	display();
	return 0;
}
