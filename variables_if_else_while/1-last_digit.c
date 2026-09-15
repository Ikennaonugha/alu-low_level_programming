#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char message[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		strcpy(message, "and is greater than 5");
	else if (last_digit == 0)
		strcpy(message, "and is 0");
	else
		strcpy(message, "and is less than 6 and not 0");
	printf("Last digit of %d is %d %s\n", n, last_digit, message);
	return (0);
}
