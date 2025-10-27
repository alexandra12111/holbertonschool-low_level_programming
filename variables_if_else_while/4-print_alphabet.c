#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char nuhuh;

	for (nuhuh = 'a'; nuhuh <= 'z'; nuhuh++)
		if (nuhuh != 'e' && nuhuh != 'q')
			putchar(nuhuh);

	putchar('\n');

	return (0);
}
