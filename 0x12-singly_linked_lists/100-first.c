#include <stdio.h>

void pri_ntf(void) __attribute__ ((constructor));

/**
 * pri_ntf - function that print prints a sentence before the main
 * function is executed.
 * Return: void
 */
void pri_ntf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
