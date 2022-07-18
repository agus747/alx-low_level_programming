#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 * Return: pointer to the byte ins that matches the one of the bytes n accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	}
	return (NULL);
}
