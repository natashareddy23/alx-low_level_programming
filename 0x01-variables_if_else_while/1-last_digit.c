#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - annoying
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last degit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && X != 0)
	{
		printf("and is greater than 6 and not 0");
	}
	printf("\n");
	return (0);
