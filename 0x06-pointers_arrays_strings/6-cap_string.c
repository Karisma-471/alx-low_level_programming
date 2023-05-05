#include "main.h"

/**
  * cap_string - capitalize all words of a string
  * @str: string to be used
  *
  * Return: string that has been capitalized
  */
char *cap_string(char *str)
{
	int o = 0;

	while (str[o])
	{

		while (!(str[o] >= 'a' && str[o] <= 'z'))

			o++;
		if (str[o - 1] == ' ' ||
		str[o - 1] == '\t' ||
		str[o - 1] == '\n' ||
		str[o - 1] == ',' ||
		str[o - 1] == ';' ||
		str[o - 1] == '.' ||
		str[o - 1] == '!' ||
		str[o - 1] == '?' ||
		str[o - 1] == '"' ||
		str[o - 1] == '(' ||
		str[o - 1] == ')' ||
		str[o - 1] == '{' ||
		str[o - 1] == '}' ||
		o == 0)
			str[o] -= 32;
		o++;
	}
	return (str);
}
