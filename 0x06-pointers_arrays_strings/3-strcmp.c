#include "main.h"

/**
 * _strcmp - A funtion that compares two strings
 * @s1: First string
 * @s2:Ssecond string
 * Return: returms 0 if s1 is equal to s2
 *	returns negative number if s1 is less than s2
 *	returns positive number if s1 is greater that s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[1] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
