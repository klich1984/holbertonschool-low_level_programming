#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the natural numbers from 0 to 9.
 *
 * Return: Always 0.
 */

int main(void)
{
	int uni;
	int dec;

	for (dec = 48; dec <= 57; dec++)
	{

		for (uni = 48; uni <= 57; uni++)
		{
			putchar(dec);
			putchar(uni);

			if (((dec <= 57) && (dec >= 48)) && (dec != 57 || uni != 57))
			{
			putchar(',');
			putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
