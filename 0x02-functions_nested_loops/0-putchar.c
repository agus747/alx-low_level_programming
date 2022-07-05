#include <stdio.h>

/**
 * main - debugging example
 * Return: 0
 */

int main(void)
{
	char *putchar = "putchar";

	while (*putchar)
	{
		_putchar(*putchar);
			putchar++;
	}
	_putchar('\n');
	return (0);
}
