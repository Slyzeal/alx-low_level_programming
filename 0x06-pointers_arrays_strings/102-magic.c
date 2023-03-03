#include <stdio.h>
/**
* main - Function
*
* return: always 0
*/

int main(void)
{
int n;
int i[5];
int *j;

i[2] = 1024;
j = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use 'i'
* - you are not allowed to modify 'j'
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(j + 5) = 98;
/* ...so that this prints 98\n */
printf("i[2] = %d\n", i[2]);
return (0);
}

