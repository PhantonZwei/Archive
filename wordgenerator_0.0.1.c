#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // for rand()
#include <time.h> // for time()
#include <string.h>

/* Possible Letters contained in the names*/
char variables[65] = "abcdefghijklmnopqrstuvwxyz'´`^° ABCDEFGHIJKLMNOPQRSTUVWXYZ'´`^° ";


main()
{
	
	printf("Random Word Generator\n");

	int varMax=0;				// Max Length of Name	
	int r = 0;				// The current position within the word
	int x = 0;				// Contains the random letter later on
	int i = 0;				// Multiplier on how many randomization runs should be made
	printf("Please enter the words length(up to 15 letters)");
	scanf_s("%d",&varMax);
	int nameStr[15];			// Dynamic allocation would be better, but didn't know the difference when upon creation
	srand(time(NULL));			

		
			
		while (i <= varMax)
		{
			for (;r <14;r++)
			{
				x = (rand() % 65);
				nameStr[r] = variables[x];
			}
			i++;
		}
		nameStr[14] = "\0";
			
			
		printf("%s\n", nameStr);

	printf("Press a key to exit.\n");
	_getch();
}
