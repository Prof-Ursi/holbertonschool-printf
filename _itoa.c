#include "main.h"

 /**
  * _reverse - function to reverse a string
  * @str: string to reverse
  * @length: length of the string
 */

void _reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;
	

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}


/**
 * _itoa - change a int into a string
 * @num: given int to convert
 * @str: string localisation
 * @base: numeral base used
 * Return: the converted string
*/

char *_itoa(int num)
{
	char *str;
	int i = 0;
	int lennum = num;
	int rem;

	while (lennum > 0)
	{
		lennum /= 10;
		i++;
	}
	
	str = malloc(sizeof(char) * (i + 1));
	i = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0)
	{
		num = -num;
		i++;
	}

	while (num != 0)
	{
 		rem = abs(num % 10);
        str[i++] = rem + '0';
        num /= 10;
	}
	str[i] = '\0';
	_reverse(str, i);
	return (str);
	free(str);
}
