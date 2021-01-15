#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hh;
	int h;
	int m;
	int mm;

	for (h = 48; h <= 50; h++)
	{
		for (hh = 48; hh <= 57; hh++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (mm = 48; mm <= 57; mm++)
				{
				_putchar(h);
				_putchar(hh);
				_putchar(':');
				_putchar(m);
				_putchar(mm);
				_putchar('\n');

				if (h == 50 && hh == 51 && m == 53 && mm == 57)
				{
					return;
				}

				}
			}

		}

	}
}
