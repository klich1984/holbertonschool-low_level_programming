#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the natural numbers from 0 to 9.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if ((num < 57) && (num >= 48))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
