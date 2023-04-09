#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 if everthing is right  
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}