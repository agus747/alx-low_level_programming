#include <stdio.h>

/**
 * main - function that prints the name of the file it was compiled
 * from, followed by a new line
 * Return: success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
