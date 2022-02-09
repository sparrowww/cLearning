/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#include <algorithm>
#include <math.h> 


int myFunc (int x)
{
    int y = x;
    return y;
}
int main()
{
    srand(time(0));
    int size = 20;
    int arr[size][size] = {};
    int * ptr = &arr[0][0];
    //generate (ptr, &ptr[size*size], [](){return rand()%2;});
    
    for (int x = 0; x < size; ++x )
    {
        int y = myFunc(x);
        if ( y >=0 && y < size )
        {
            arr[y][x] = 1;
        }

    }
    
    for (int i = 0; i < size*size; ++i )
    {
        if (ptr[i]==1)
        {
            printf("X ");
        }
        else
        {
            printf("* ");
        }
        if ((i+1)%size ==0)
        {
            printf("\n");
        }
    }
    return 0;
}
