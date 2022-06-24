#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
