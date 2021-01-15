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
	char nb_10;

	for (nb_10 = '0'; nb_10 <= '9'; nb_10++)
	{
		putchar (nb_10);
	}

	for (nb_10 = 'a'; nb_10 <= 'f'; nb_10++)
	{
		putchar (nb_10);
	}
	putchar ('\n');
	return (0);
}
