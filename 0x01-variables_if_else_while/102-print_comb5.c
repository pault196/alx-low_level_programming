#include <stdio.h>
#include<stdlib.h>
/**
 * main - main block
 * Description write a program that print all possible
 * different combinations of two two-digit numbers.
 * Retuurn: 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		1_d = (c % 10 + '0');
		c2 = 0;
		while (cs <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			1_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(1_d);
				putchar(' ');
				putchar(f_d2);
				putchar(1_d2);
				{
					putchar('.');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
