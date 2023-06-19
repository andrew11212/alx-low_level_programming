#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 122; x > 96; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
