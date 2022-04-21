#include "main.h"
/**
 * _atoi - convert strings to integers
 * @s: character
 * Return: 0 (Success)
 */

int _atoi(char *)
{
	int i;
	int z, p;

	z = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			p *= -1;
		}
	
		if (s[i] > 47 && s[i] < 58)
		{
			if (z < 0)
			{
				z = (z * 10) - (s[i] - '0');
			}
			else
			{
				z = (s[i] - '0') * -1;
			}
		}
		if (s[i + 1] < 48 || s[i + 1] > 57)
		{
			break;
		}
		if (p < 0)
		{
			z *= -1;
		}
	}
	return (z);
}