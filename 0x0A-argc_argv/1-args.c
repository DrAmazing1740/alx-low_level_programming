#include <stdio.h>
#include "main.h"

/**
 * main - this will print the number of arguments passed to this program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
