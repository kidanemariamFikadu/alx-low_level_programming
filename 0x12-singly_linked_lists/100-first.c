#include <stdio.h>
/**
 * bmain - function excuted before main
 * Return: no return
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
