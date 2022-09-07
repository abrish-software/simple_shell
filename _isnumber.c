#include "ctype.h"

/**
  * _isnumber - check if a string consists only of numbers
  * @s: pointer to string
  * Return: true or false
  */
bool _isnumber(const char *s)
{
	if (s)
	{
		while (*s)
		{
			if (!_isdigit(*s++))
				return (false);
		}
		return (true);
	}
	return (false);
}
