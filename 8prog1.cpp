#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

class list
{
	private:
	node *head,*tail;
	
	public:
	
	list()
	{
		head=NULL;
		tail=NULL;
	}
	
	void add_node(int n)
	{
		node *temp= new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
	
	void insert_node_first(int n)
	{
		node *pos;
		pos->data=n;
		pos->next=NULL;
		head=pos;
		tail=pos;
	}
	void insert_node(int k,int n)
	{
		int j=0;
		node *pos=new node;
		node *bfr=new node;
		node *aft=new node;
		pos->data=n;
		pos->next=NULL;
		if(k==0)
		{
			pos->next=head->next;
			head->next=pos;
			j=head->data;
			pos->data=j;
			head->data=n;
		}
		else
		{
		bfr=head;
		aft=head;
		for(int i=0;i<=k;i++)
		{
			aft=aft->next;
		}
		for(int i=0;i<k-1;i++)
		{
			bfr=bfr->next;
		}
		pos->next=bfr->next;
		bfr->next=pos;
		}
		
	}
	void delete_node(int k)
	 {          node *pos=new node;    
		node *bfr=new node;
		node *aft=new node;
		bfr=head;
		pos=head;
		aft=head;
		if(k==0)
		{
			pos=pos->next;
		            head=pos;	
		
		}
		else
		{
		
		for(int i=0;i<=k;i++)
		{
			aft=aft->next;
		}
		for(int i=0;i<k;i++)
		{
			pos=pos->next;
		}
		
		for(int i=0;i<k-1;i++)
		{
			bfr=bfr->next;
		}
		bfr->next=pos->next;
		pos->next=NULL;
		}
	}
	
	void display()
	{
		node *temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"-->";
			temp=temp->next;
			
		}
		cout<<"NULL";
	}
};
int main() {
	list a;
	int n=0,m=0,i1=0,pos=0,data=0;
	cout<<"\n Do you have the initial list? \nif yes press 1\nif not press 2";
	cin>>i1;
	switch(i1)
	{
	case 1:
	cout<<"\n enter the no of elements in list ";
	cin>>m;
	cout<<"\n enter the elements";
	 for(int i=1;i<=m;i++)
	{
		cin>>n;
		a.add_node(n);
	}
	break;
	
	case 2:
	break;
	}
	
	cout<<"\n the linked list is \n";
	a.display();

	
	cout<<"\nDo you want to insert a node?\n If yes press 1 \n If no press 2";
	cin>>i1;
	switch(i1)
	{
		case 1:
		cout<<"enter the position to enter and the data";
		cin>>pos>>data;
		if(pos==0)
		a.insert_node_first(pos);
		else
		a.insert_node(pos,data);
		break;
		
		case 2:
		break;
	}
	a.display();
	cout<<"\nDo you want to delete a node?\n If yes press 1 \n If no press 2";
	cin>>i1;
	switch(i1)
	{
		case 1:
		cout<<"\n the position to delete";
		cin>>pos;
		a.delete_node(pos);
		
		case 2:
		break;
	}
	a.display();
		return 0;
}
