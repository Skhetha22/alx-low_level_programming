#include "main.h"

/**
* _puts_recursion - main funcion
*
* @s: function parameter
*
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	_puchar (*s);
	_puts_recursion(s + 1);
	}
	else
	_puchar('\n');
}
