#include <stdio.h>
#include <stdlib.h>

/*Get number of elements
 *
 * malloc the array
 *
 * malloc each element
 *
 * Initialize the memory
 **/

int main(void)
{
	char *ptr = "Hello World";
	int indx = 0;
	int indx2 = 0;
	int indx3 = 0;
	int elmt = 0;
	char **list = NULL;

	for (indx = 0; ptr[indx] != '\0'; indx++)
	{
		if (ptr[indx] == ' ')
			elmt++;
	}

	elmt+=2;

	list = malloc(sizeof(list)*elmt);

	for (indx = 0; indx < elmt; indx++)
	{
		list[indx] = malloc(sizeof(char)*100);
	}

	for (indx = 0; indx < elmt-1; indx++)
	{
		for (indx2 = 0; ptr[indx3] != ' ' && ptr[indx3] != '\0'; indx2++)
			{
				list[indx][indx2] = ptr[indx3];
				indx3++;
			}
		list[indx][indx2] = '\0';
		indx3++;
	}

	list[indx] = NULL;

	for (indx2 = 0; list[indx2] != NULL; indx2++)
	{
		printf("list[%i]: ,<%s\n>", indx2, list[indx2]);
	}
	
}
