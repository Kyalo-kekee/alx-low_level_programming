#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
