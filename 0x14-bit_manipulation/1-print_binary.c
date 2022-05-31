#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int i, bin = 0;
unsigned long int count;

for (i = 63; i >= 0; i--)
{
count = n >> i;

if  (count & 1)
{
_putchar('1');
bin++;
}
else if (bin)
_putchar('0');
}
if (!bin)
_putchar('0');
}
