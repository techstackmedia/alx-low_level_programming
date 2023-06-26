#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return num * sign;
}

