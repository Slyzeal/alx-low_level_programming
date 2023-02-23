#include "main.h"
/**
* _isalpha - Alphabet
*@c: char
* Description: 'function'
* Return: 1 if c is letter lower or upper, else 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
