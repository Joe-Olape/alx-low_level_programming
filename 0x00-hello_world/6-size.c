#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a int long: %i byte(s)\n", sizeof(int long));
	printf("Size of a int long long: %i byte(s)\n", sizeof(int long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);

}
