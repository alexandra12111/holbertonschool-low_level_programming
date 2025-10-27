#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char mhm;

	for (mhm = 'z'; mhm >= 'a'; mhm--)
		putchar(mhm);

	putchar('\n');

	return (0);
}
