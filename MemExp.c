#include <stdio.h>

// fix the code-> want to make it print the 2D array all idx in a new line
int main(void)
{
  char *writers[] = {"Sylvia Day", "Isabel Allende", "Anthony Burgess",
    "Lois Lowry", NULL};

	int indx, indx2;

	for(indx = 0; writers[indx] != NULL; indx++)
	{
		for(indx2 = 0; writers[indx][indx2] != '\0'; indx2++)
			putchar(writers[indx][indx2]);
		putchar('\n');
	}

	
  return (0);
}
