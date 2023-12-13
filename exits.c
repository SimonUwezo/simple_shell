#include "shell.h"

/**
 **_strncpy - Function that copies a string.
 *@dest: Destination string.
 *@src: source string
 *@n: Amount of chars to be copied
 *Return: Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b, j;
	char *s = dest;

	b = 0;
	while (src[b] != '\0' && b < n - 1)
	{
		dest[b] = src[b];
		b++;
	}
	if (i < n)
	{
		j = b;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - Function that concatenates two strings
 *@dest: First string
 *@src: Second string
 *@n: Amount of bytes to be maximally used
 *Return: Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int b, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[b] != '\0')
		b++;
	while (src[j] != '\0' && j < n)
	{
		dest[b] = src[j];
		b++;
		j++;
	}
	if (j < n)
		dest[b] = '\0';
	return (s);
}

/**
 **_strchr - Function that locates a char.
 *@s: the string.
 *@c: the char
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
