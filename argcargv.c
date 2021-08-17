#include <stdio.h>

int main(int argc, char *argv[])
{
	int indx;

	for (indx = 0; argv[1][indx] != '\0'; indx++)
	{
		putchar(argv[1][indx]);
	}
	putchar('\n');

	return(0);
}
