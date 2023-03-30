#include "main.h"

/**
  * *_strcat - Copy a string
  * @dest: The destination value
  * @src: The source value
  *
  *
  * Return: char value
  */
char *_strcat(char *dest, char *src)
	/* code of the function starts here*/
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
