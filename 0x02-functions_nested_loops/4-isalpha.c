#include "main.h"

/**
* _isalpha - check if a char is lowercase
* @c: the char to be checked
* Return: 1 if char is letter lower or upper, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
	return (1);
	else
	return (0);

}

