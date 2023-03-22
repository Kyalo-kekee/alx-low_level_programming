#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i, x;

	for (x = 0; x <= 9; x++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
