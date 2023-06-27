#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte
 * @dest: Buffer to copy the string to
 * @src: String to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
