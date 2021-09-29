// Write a program to insert an element in the existing linked list at the beginning?

#include<iostream.h>
#incdude<conio.h>

using namespace std;
class Node
{
	private:
		int info;
		Node *next;
	public:
		Node()
    {
			info=0;
			next=NULL;
		}
		void traverse();
		void insert_at_first();
		void insert_at_end();
};

Node *start,*temp;

void Node::traverse()
{
	if(start==NULL)
  {
		cout<<"list is empty";
	}
	else
  {
		temp=start;
		while(temp!=NULL)
    {
			cout<<"=>"<<temp->info;
			temp=temp->next;
		}
	}
}

void Node::insert_at_first()

 {
	Node *newNode;
	newNode=new Node;
	cout<<"enter info:- ";
	cin>>newNode->info;
	newNode->next=NULL;
	if(!newNode)
  {
		cout<<"overflow";
		return;
	}
	if(start==NULL)
	{
		start=newNode;
	}
	else
  {
		newNode->next=start;
		start=newNode;
	}
}

void Node::insert_at_end()

{
	Node *newNode;
	newNode=new Node;
	cout<<"enter info:";
	cin>>newNode->info;
	newNode->next=NULL;
	if(!newNode)
  {
		cout<<"overflow";
		return;
	}
	else if(start==NULL)
  {
		start=newNode;
		return;
	}
	else
  {
		temp=start;
		while(temp->next!=NULL)
    {
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

int main()
{
	Node obj;
	char ans;
	do
  {
		obj.insert_at_end();
		cout<<"Do you want to enter more info???";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
	cout<<"\n Linked list is as of now:-- ";
	obj.traverse();
	cout<<"\n Now enter the element to insert at the beginning of the list.";
	obj.insert_at_first();
	cout<<"\n Linked list after element is inserted at beginning:-- \n";
	obj.traverse();
}
