/**
 * _islower -This function checks for lowercase characters
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	/* the code of this function will use the if else statement*/
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
