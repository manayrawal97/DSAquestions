// Write a program to create a linked list with 5 elements and display it ? 

#include<iostream.h>
#include<conio.h>

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

void Node::insert_at_end()

{
	Node *newNode;
	newNode=new Node;
	cout<<"enter info";
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
	}
  while(ans=='y'||ans=='Y');
	obj.traverse();
}

// Manay Rawal CSE{M}
