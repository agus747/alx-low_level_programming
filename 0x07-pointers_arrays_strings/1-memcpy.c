#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory destination where is stored
 * @src: memory where it is copied
 * @n: number of bytes
 * Return: pointer det copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
