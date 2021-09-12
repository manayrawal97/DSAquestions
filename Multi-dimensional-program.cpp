//Creating multidimensional array and initializewith values and display in row & column major order.

#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int x[2][3][2] =
    {
        { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }
    };
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at x["<<i<<"]["<<j<<"]["<<k<<"]="<<x[i][j][k]<<endl;
            }
        }
    }
   getch();
}


// Manay Rawal
