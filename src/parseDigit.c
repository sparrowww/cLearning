/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inVar = -1000000000;
    printf("inVar = %d\n", inVar);
    
    const short MAX_NUM_INT_64_DIGIT = 10;
    
    int numDigits = 0;
    int inVarC = inVar;
    for(;;)
    {
        inVarC /= 10;
        ++numDigits;
        if (inVarC ==0) break;
    }
    
    printf("numDigits = %d\n", numDigits);
    int arrDigit[numDigits];
    
    char sign = '+';
    if (inVar < 0) sign = '-';
    else if (inVar == 0) sign = '0';
    printf("sign = %c\n", sign);
    
    for (int i = 0; i < numDigits; ++i)
    {
        int digit = inVar % 10;
        inVar /= 10;
        arrDigit[i] = abs(digit);
        if (inVar ==0) break;
    }
    
    for (int i = 0; i < numDigits; ++i)
    {
        printf("digit[%d] = %d\n",numDigits-1-i, arrDigit[numDigits-1-i]);
    }

    return 0;
}
