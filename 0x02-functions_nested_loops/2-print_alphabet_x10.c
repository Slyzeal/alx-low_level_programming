#include "main.h"
/**
* print_alphabet -alphabet
*
* Description: 'function'
* Return: always 0 (success)
*/

void print_alphabet(void)
{
int number_x10 = 0;
char alphabet;
while (number_x10++ <= 9)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}