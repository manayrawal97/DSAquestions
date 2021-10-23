#include<iostream.h>
#include<stdio.h>
using namespace std;
struct node
{
int data;
struct node *next;
};

void printlinkedlist(struct node *ptr)

{
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;

}
}

struct node *insert(struct node *first,int data)

{

struct node *ptr = new node;
ptr->next=first;
ptr->data=data;
return ptr;
}

int main()

{
struct node *first,*second,*third,*fourth,*fifth;

first= new node;
second=new node;
third= new node;
fourth= new node;
fifth= new node;

first->data= 1;
first->next=second;

second->data= 2;
second->next=third;

third->data= 3;
third->next=fourth;

fourth->data= 4;
fourth->next=fifth;

fifth->data= 5;
fifth->next=NULL;

cout<<"FIRST==>";

printlinkedlist(first);
first=insert(first,5);

cout<<"after inserting an element at the first position"<<endl;

printlinkedlist(first);
return 0;
}

//MANAY RAWAL
