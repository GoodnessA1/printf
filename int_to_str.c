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
	int i = 0;
	char temp;
	int left, right, isNegative;

	if (n == 0) 
		buffer[i++] = '0';
	else {
		isNegative = 0;

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

	left = 0;
	right = i - 1;

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
