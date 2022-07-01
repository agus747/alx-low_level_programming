#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}

	putchar('\n');
	return (0);
}
