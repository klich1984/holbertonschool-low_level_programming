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
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		while ((abc >= 'a') && (abc <= 'z') && (abc != 'e') && (abc != 'q'))
		{
			putchar (abc);
			abc++;
		}
	}
	putchar ('\n');
	return (0);
}
