#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be modified
 *
 * Return: modified string
 */
char *cap_string(char *str)
	/*code of the function starts here*/
{
	int i;
	int flag;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			flag = 0;
		}
		i++;
	}
	return (str);
}
