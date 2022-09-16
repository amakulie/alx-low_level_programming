#include "main.h"

/**
 * _isupper -checks if a character is uppercas or not
 * @c: chracter to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int_isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
