#include <stdio.h>

/**
 * main - prints number of commandline arguments
 * @argc: number of comandline arguments
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
