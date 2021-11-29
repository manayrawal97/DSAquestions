// Menu driven program i.e., insertion, deletion & displaying elements Array implementation in Queue Compiled through online compiler

#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 100

using namespace std;


int item, choice, i;
int arr_queue[MAX_SIZE];
int rear = 0;
int front = 0;
int exit_p = 1;

void insert() 
{
    if (rear == MAX_SIZE)
        cout << "\n-->Queue Reached Max!";
    else 
    {
        cout << "\nEnter the value for insertion : ";
        cin>>item;
        cout << "\n--> Position = " << rear + 1 << " ==> Inserted value =  " << item;
        arr_queue[rear++] = item;
    }
}

void removeData() 
{
    if (front == rear)
        cout << "\n--> Queue is empty, try filling some values !";
    else 
    {
        cout << "\n--> Position = " << front << " ==> Removed value = " << arr_queue[front];
        front++;
    }
}

void display() 
{
    cout << "\n--> Queue Size = " << (rear - front);
    for (i = front; i < rear; i++)
        cout << "\n--> Position = " << i << "===>Value =  " << arr_queue[i];
}
int main()
{
    cout << "\n Menu driven program for queue using array implementation ";
    do 
    {
        cout << "\n\n Operations you can do on queue are: ";

        cout << "\n 1.Insert \n 2.Delete \n 3.Display \n press any number (except 1, 2 & 3) to exit \n ";
        cout << "\nEnter your choice : ";
        cin>>choice;
        switch (choice) 
        {
            case 1:
                insert();
                break;
            case 2:
                removeData();
                break;
            case 3:
                display();
                break;
            default:
                exit_p = 0;
                break;
        }
    } 
  while (exit_p);

    return 0;
}
