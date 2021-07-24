#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - returns the length of a string.
 * @s: a string of characters
 *
 * Return: the length of the string s
 */
int _strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
