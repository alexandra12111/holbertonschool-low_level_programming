#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int yeah;

	for (yeah = 0; yeah < 16; yeah++)
	{
		if (yeah < 10)
			putchar(yeah + '0');
		else
			putchar(yeah - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
