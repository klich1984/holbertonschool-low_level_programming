#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc_min, ABC_MAY;

	for (abc_min = 'a'; abc_min <= 'z'; abc_min++)
	{
		putchar (abc_min);
	}
	for (ABC_MAY = 'A' ; ABC_MAY <= 'Z' ; ABC_MAY++)
	{
		putchar (ABC_MAY);
	}
	putchar ('\n');
	return (0);
}
