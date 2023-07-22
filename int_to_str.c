#include "main.h"

/**
 * int_to_str - Converts int to string
 * @n: integer to convert
 *
 * Return: Buffer of string
 */
void int_to_str(int n)
{
	char buffer[40];
	char *p;
	int i = 0;

	if (n == 0) 
		buffer[i++] = '0';
	else {
		int isNegative = 0;

		if (n < 0) {
			isNegative = 1;
			n = -n;
		}
		while (n > 0)
		{
			buffer[i++] = '0' + (n % 10);
			n /= 10;
		}
		if (isNegative) buffer[i++] = '-';
	}

	int left = 0;
	int right = i - 1;
	char temp;

	while (left < right)
	{
		temp = buffer[left];
		buffer[left] = buffer[right];
		buffer[right] = temp;
		right--;
		left++;
	}
	write(STDOUT_FILENO, buffer, i);
}
