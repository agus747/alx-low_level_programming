#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
