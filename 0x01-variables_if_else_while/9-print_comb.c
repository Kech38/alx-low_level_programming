#include<stdio.h>
/**
* main - entry point
* Description: print all possible combinations of single-digit numbers
* Return: Always 0
*/
int main(void)
{
int c = 0;

for (c = 0; c < 21; c++)
{
putchar(c);
if (c != 20)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
