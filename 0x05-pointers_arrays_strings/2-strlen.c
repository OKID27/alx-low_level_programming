#include "main.h"
/**
* _strlen - returns the len of a str
* @s : string
* Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
