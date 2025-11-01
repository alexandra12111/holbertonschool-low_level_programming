#include "main.h"

/**
	* print_last_digit - Prints the last digit of a number
	* @r: The number to extract the last digit from
	*
	* Return: The value of the last digit
	*/
int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
	last_digit = -1 * (r % 10);
	else
	last_digit = r % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
