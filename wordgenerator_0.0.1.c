#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // for rand()
#include <time.h> // for time()
#include <string.h>

/* Possible Letters contained in the names*/
char variables[65] = "abcdefghijklmnopqrstuvwxyz'´`^° ABCDEFGHIJKLMNOPQRSTUVWXYZ'´`^° ";


main()
{
	
	printf("Random Name Generator\n");

	int varMax=0;				// Max Length of Name	
	int r=0;
	int x = 0;
	int i = 0;
	char y=0;
	printf("Please enter the names length(up to 15 letters)");
	scanf_s("%d",&varMax);
	int nameStr[15];
	srand(time(NULL));

		
			
		while (i <= varMax)
		{
			for (;r <14;r++)
			{
				x = (rand() % 65);
				//printf("x=%d\n", x);
				nameStr[r] = variables[x];
				//printf("\nThe generator shows a %s\n", nameStr[r]);
				//r++;
			}
			i++;
			//printf("%s\n", nameStr);
		}
		nameStr[14] = "\0";
			
			
		printf("%s\n", nameStr);

	printf("Press a key to exit.\n");
	_getch();
}
