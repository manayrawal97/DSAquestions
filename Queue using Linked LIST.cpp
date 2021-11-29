//write a program of Queue using Linked LIST?
 
#include <iostream>
#include <stdlib.h>
using namespace std; 
struct node 
{
    int data;
    struct node *next;
}*front, *back;
void init() 
{        
    front = back = NULL;
}
 
int Size() 
{      
    struct node *temp = front;
    int count = 0;
    if(front == NULL && back == NULL)
        return 0;
    while(temp != back)
    {
        count++;
        temp = temp->next;
    }
    if(temp == back)
        count++;
    return count;
}
int frontval() 
{    
    return front->data;
}
int backval()
{      
    return back->data;
}
void isempty() 
{
    if (front == NULL && back == NULL)
        cout<<"Empty Queue\n";
    else
        cout<<"Queue is not Empty\n";
}
void enqueue(int num) 
{     
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
     
    if (back == NULL) 
    {
        front = back = temp;
    } 
        else 
    {
        back->next = temp;
        back = temp;
    }
}
void dequeue()
{ 
    struct node *temp;
    if (front == NULL) 
    {
        cout<<"\nQueue is Empty \n";
        return;
    }
        else 
    {
        temp = front;
        front = front->next;
        if(front == NULL)
        {
            back = NULL;
        }
        cout<<"Removed Element =  "<<temp->data<<endl;
        free(temp);      
    }
}
  
void print()
{    
    struct node *temp = front;
    if ((front == NULL) && (back == NULL))
    {
        cout<<"Queue is Empty\n";
        return;
    }
    while (temp != NULL) 
    {
        cout<<temp->data;
        temp = temp->next;
        if(temp != NULL)
            cout<<"-->";
    }
}
int main()
{
    cout<<"\n \t \tTHIS IS A PROGRAM OF QUEUE USING LINKED LIST --BY TANVI"<<endl;
    init();      
    enqueue(100);       
    enqueue(99);
    enqueue(88);
    enqueue(77);
    enqueue(66);
    print();      
    cout<<"\nSize of Queue = "<< Size()<<endl;   
    cout<<"Front Element in a queue = "<< frontval()<<endl;   
    cout<<"Rear Element in queue =  "<< backval()<<endl;
    dequeue();         
    dequeue();
    dequeue();
    dequeue();    
    dequeue();
    dequeue();
    return 0;
}
/*
output:-
 	 	THIS IS A PROGRAM OF QUEUE USING LINKED LIST --BY TANVI
55-->44-->33-->22-->11
Size of Queue = 5
Front Element in a queue = 55
Rear Element in queue =  11
Removed Element =  55
Removed Element =  44
Removed Element =  33
Removed Element =  22
Removed Element =  11

Queue is Empty



MANAY RAWAL
*/
