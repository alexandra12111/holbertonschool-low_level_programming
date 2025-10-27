#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	char slay;

	for (slay = '0'; slay <= '9'; slay++)
		putchar(slay);

	putchar('\n');

	return (0);
}
