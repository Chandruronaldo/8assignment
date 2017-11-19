#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
	
};

class queue{
	private:
	node *head,*tail;
	
	public:
	queue()
	{
		head=NULL;
		tail=NULL;
	}
	
	void push(int n)
	{
		node* temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			temp->next=head;
			head=temp;
		}
	}
	
	void display()
	{
		node *temp=new node;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<"BASE";
	}
	void pop()
	{
		node *temp=new node;
		temp=head;
		if(temp==NULL)
		{
			cout<<"\n error";
		}
		else
		{
			temp=temp->next;
			head=temp;
		}
	}
};



int main() {
    
    queue a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.display();
    cout<<"\n";
    a.pop();
    a.display();
    cout<<"\n";
    a.pop();
    a.display();
     cout<<"\n";
    a.pop();
    a.pop();
    
    return 0;
}
