#include "main.h"

/**
 * _ strspn - gets lengthof a prefix substring
 * @s: string to check
 * accept: string to check against
 *
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == accept[i])
			break;
	}
	if (!accept[i])
		break;
} 
