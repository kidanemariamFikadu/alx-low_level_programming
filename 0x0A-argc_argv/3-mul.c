#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication result of 2 numbers or prints error if two argumrnts are not provided
 * @argc: number of commandline arguments
 * @args: array of commandline arguments
 * Return: 0
 */
int main(int argc, char *args[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(args[1]) * atoi(args[2]));
	return (0);
}
