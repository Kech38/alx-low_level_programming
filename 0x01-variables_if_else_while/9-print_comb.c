#include<stdio.h>
/**
* main - entry point
* Description: print all possible combinations of single-digit numbers
* Return: Always 0
*/
int main(void)
{
int c = 0;

for (c = 0; c < 10; c++)
{
putchar(c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
