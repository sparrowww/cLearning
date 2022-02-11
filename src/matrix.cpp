/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unistd.h>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(0));
    int size = 20;
    int arr[size*size] = {};

    while (1)
    {
        for (int i = 1; i <= size*size; ++i)
        {
            printf("%x ",arr[i-1]);
            if (i%size == 0)
                printf("\n");
        }
        usleep(100000);
        printf("\033c");
        generate(arr, &arr[size*size], [](){return rand()%16;});
    }
    
    return 0;
}
