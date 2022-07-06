#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: takes in characters
 * Returns: 1 if c is letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
