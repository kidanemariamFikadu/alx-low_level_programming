#include "main.h"

/**
 * main - print all lowercase alphabet
 * Return: Always 0 
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void){
	int b;
	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
