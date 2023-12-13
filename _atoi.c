#include "shell.h"
/**
 * interactive - shell is a command interpreter and
 * a command programming language.
 * @info: returns information
 * and statistics about the server
 * in a format that is simple to parse by
 * computers and easy to read by humans.
 * Return: 0 if the mode is not interactive.
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * is_delim - char that marks the start or end of
 * character string
 * @c: character check
 * @delim: contiguous sequence of characters).
 * Return: 0 false, 1 true
 */
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}
/**
 * _isalpha - function to check if a char is abcd
 * @c: character to be inputed
 * Return: if k is abcd 1 and 0 if not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
 * _atoi - converts string argument to an int
 * @s: str converted
 * Return: 0 if it is a string
 */
int _atoi(char *s)
{
int j, sign = 1, flag = 0, output;
unsigned int result = 0;
for (j = 0; s[j] != '\0' && flag != 2; j++)
{
if (s[j] == '-')
sign *= -1;
if (s[j] >= '0' && s[j] <= '9')
{
flag = 1;
result *= 10;
result += (s[j] - '0');
}
else if (flag == 1)
flag = 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}
