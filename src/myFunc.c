/*
 * myFunc.c
 */
#include <stdio.h>

static void testConsoleIn()
{
	char c;
	c = getchar();
	printf("c = %c \n", c);

	char * string;
	scanf("%s",string);
	printf("string = %s \n", string);
};

static void getTypeSize( )
{
	printf("size char type = %ld \n", sizeof(char));
	printf("size short type = %ld \n", sizeof(short));
	printf("size int type = %ld \n", sizeof(int));
	printf("size long type = %ld \n", sizeof(long));
	printf("size long long type = %ld \n", sizeof(long long));
	printf("size float type = %ld \n", sizeof(float));
	printf("size double type = %ld \n", sizeof(double));
};

static const int SUPER_NUMBER = 42;
#define SUPER_NUMBER_2 SUPER_NUMBER + 1

static void checkConst( )
{
	printf("SUPER_NUMBER = %d \n", SUPER_NUMBER);
	printf("SUPER_NUMBER_2 = %d \n", SUPER_NUMBER_2);
};
