#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long  int: %i byte(s)\n", sizeof(int long));
	printf("Size of a long long int: %i byte(s)\n", sizeof(int long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);

}
