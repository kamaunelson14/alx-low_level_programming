#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	int b;

	long c;

	long long d;

	float e;

	printf("Size of a char:%2ld byte(s)\n", sizeof(a));
	printf("Size of an int:%2ld byte(s)\n", sizeof(b));
	printf("Size of a long int:%2ld byte(s)\n", sizeof(c));
	printf("Size of a long long int:%2ld byte(s)\n", sizeof(d));
	printf("Size of a float:%2ld byte(s)\n", sizeof(e));
	return (0);
}
