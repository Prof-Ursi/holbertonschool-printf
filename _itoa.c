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

char *_itoa(int num, char *str, int base)
{
	int i = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0 && base == 10)
	{
		num = -num;
		str[i++] = '-';
	}

	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	str[i] = '\0';
	_reverse(str, i);
	return (str);
}
