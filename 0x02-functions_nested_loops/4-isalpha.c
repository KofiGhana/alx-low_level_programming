#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: Checked the character
 * Return: 1 if char is alphabetic or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
return (0);
}
