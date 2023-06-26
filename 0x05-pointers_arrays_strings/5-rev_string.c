#include "main.h"
/**
 * rev_string - reverses a string
 *@s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int c, i;
	char temp;

	for (c = 0; s[c] != '\0'; ++c)
	;
	for (i = -1; i < c / 2; i++)
	{
		temp = s[i];
		s[i] = s[c - i];
		s[c - i] = temp;
	}
}
