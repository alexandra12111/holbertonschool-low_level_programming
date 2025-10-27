#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by ", "
 * Return: 0 (success)
 */
int main(void)
{
	int ugh;

	for (ugh = 0; ugh < 10; ugh++)
	{
		putchar(ugh + '0');
		if (ugh != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
