#include "holberton.h"

/**
 * *cap_string - reverses a sring
 *
 * @s: - definition variable type pointers
 *
 *
 * Return: variable *s
 */

char *cap_string(char *s)
{
	{
		int i;

		i = 0;

		while (s[i] != '\0')
		{
			while (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] = s[0] - 32;
				i++;
			}

			while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n'
				&& s[i] != ',' && s[i] != ';' && s[i] != '.' && s[i] != '!'
				&& s[i] != '?' && s[i] != '(' && s[i] != ')' && s[i] != '{'
				&& s[i] != '}' && s[i] != '\t')
			{
				i++;
			}

			while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
			       || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
			       || s[i] == '?' || s[i] == '(' || s[i] == ')' ||  s[i] == '{'
			       || s[i] == '}')
			{

				if (s[i] == '\t')
					s[i] = ' ';

				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				i++;
			}
		}
		return (s);
	}
}
