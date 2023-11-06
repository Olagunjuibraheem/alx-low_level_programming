#include <stdio.h>

/**
 * main - a function that prints the name of the file it was compiled from, 
 * followed by a new line.s
 * 
 * Return: nothing
 */
int main()
{	
	printf("%s\n", __FILE__);
	
	return (0);
}
