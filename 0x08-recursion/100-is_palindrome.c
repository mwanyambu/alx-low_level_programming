#include "main.h"

/**
 * str_len - returns length of string
 * @z: string
 * Return: string length
 */
int str_len(char *z)
{
	if (z == '\0')
	{
		return (0);
	else
		return (1 + str_len(z + 1));
}
/**
 * _strcmp - compares string
 * @s: string
 * @t: int
 * @u: int
 * Return: .
 */
int _strcmp(char *s, int t, int u)
{
	if (*(s + t) == *(s + u))
	{
		if (t == u || t == u + 1)
			return (1);
		return (0 + _strcmp(s, t + 1, u - 1));
	}
	return (0);
}



/**
 * is_palindrome - returns boolean
 * @s: input
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp(s, 0, str_len(z) - 1));

}
