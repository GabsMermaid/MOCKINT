#include <stdio.h>

// fix the code-> want to make it print the 2D array all idx in a new line
int main(void)
{
  char *flowers[] = {"Gardenia", "Sunflower", "Peony",
    "Magnolias", NULL};

  	int indx, indx2;

	for (indx = 0; flowers[indx] != NULL; indx++)
	{
		for (indx2 = 0; flowers[indx][indx2] != '\0'; indx2++)
			putchar(flowers[indx][indx2]);
		putchar('\n');
	}


  return (0);
}
