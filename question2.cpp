// Q: Write a program to create an array consisting 10 elements and print it in reverse.

#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
 cout<<"Reverse the order of elements in array:-" ;
     for (int i = 9; i >= 0; i--)
        cout<<arr[i]<<" \n\n ";

getch();
}


//OUTPUT:--   Reverse the order of elements in array:-  1 , 2, 3, 4, 5, 6, 7, 8, 9, 10


//Manay Rawal
