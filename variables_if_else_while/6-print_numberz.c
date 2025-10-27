#include <stdio.h>

/**
 * main - prints all single digit numbers starting from 0
 * Return: 0 (success)
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz <= 9; numberz++)
		putchar(numberz + '0');

	putchar('\n');

	return (0);
}
