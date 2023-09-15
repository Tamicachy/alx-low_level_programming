#include "main.h"

/**
 *_isdigit - function that check for digit from(0 through 9)
 *@c: parameter to be checked
 *Return: (0) on failure and return 1 on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
		return (0);
}
