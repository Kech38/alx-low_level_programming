#include <stdio.h>

/**
* main - entry point 
* Description: prints all single digit numbers of base 10
* starting from 0, followed by a new line.
* Return: 0
*/
int main(void)
{
int n;

for (n = 0; n < 11; n++)
  {
putchar(n);
if (n != 11);
 {
putchar(',');
putchar(' ');
 }
  }
putchar('\n');
return (0);
}
