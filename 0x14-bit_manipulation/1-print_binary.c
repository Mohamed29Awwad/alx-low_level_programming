#include "main.h"

/**
 * print_binary - prints the number represent in a binary system
 * @n: number to be used
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
