#include <stdio.h>
/**
 *main - Entry Point
 *Description: 'prints all base 16 numbers in lowercase'
 *Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
