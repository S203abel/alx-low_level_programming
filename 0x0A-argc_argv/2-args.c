#include <stdio.h>

/**
* main - is the entry points of the program
*@argc: number of arguments
*@argv:array of arguments
*Return: o for sucess
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

