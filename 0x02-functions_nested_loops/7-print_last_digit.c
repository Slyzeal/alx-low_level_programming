#include "main.h"

/**
 * _abs - Entry point
 * @x:integer
 * Description: prints the absolute value of an integer
 * Return: i
 */

int print_last_digit(int x)
{
int i = x % 10;

if (x < 0)
{
i = i * -1;
}
_putchar(i + '0');
return (i);
}

