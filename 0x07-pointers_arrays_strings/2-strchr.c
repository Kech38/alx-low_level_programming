237 Bytes
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
