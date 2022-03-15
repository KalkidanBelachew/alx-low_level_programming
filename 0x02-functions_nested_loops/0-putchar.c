#include "holberton.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *holberton = "_putchar";

	while (*holerton)
	{
		_putchar(*holberton);
		holberton++;
	}
	_putchar('\n');
	return (0);
}
