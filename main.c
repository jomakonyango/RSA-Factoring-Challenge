#include <stdio.h>
#include <stdlib.h>
#include "factors.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
FILE *file;
int number;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <file>\n", argv[0]);
return (1);
}

file = fopen(argv[1], "r");
if (!file)
{
perror("Error opening file");
return (1);
}

while (fscanf(file, "%d", &number) != EOF)
{
factorize(number);
}

fclose(file);
return (0);
}
