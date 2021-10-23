// Write a program of linked list deletion from first node?

#include <iostream.h>
#include<stdio.h>
using namespace std;
struct Node 
{
    int data;
    Node* next;
};

class LinkedList 
{
  private:
    Node* head;
  public:
    LinkedList()
    {
      head = NULL;
    }

  void push_back(int newElement) 
  
  {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(head == NULL)  
      {
        head = newNode;
      } 
    else
    {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
    }    
  }

  void pop_front() 
  
  {
      if(head != NULL) 
      {
        Node* temp = head;
        head = head->next; 
        free(temp); 
      }
  }

  
  void PrintList() 
  
  {
      Node* temp = head;
      if(temp != NULL) 
      {
        cout<<"The list contains: ";
        while(temp != NULL) 
        {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } 
    else
    {
        cout<<"The list is empty.\n";
    }
  }    
};

int main() 

{
  LinkedList MyList;

  MyList.push_back(1);
  MyList.push_back(2);
  MyList.push_back(3);
  MyList.push_back(4);
  MyList.PrintList();

  MyList.pop_front();
  MyList.PrintList();  

  return 0; 
}

//MANAY RAWAL
