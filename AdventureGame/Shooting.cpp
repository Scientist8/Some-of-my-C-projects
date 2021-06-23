#include <stdio.h>
 
int main () 

{ int number,exit;
   printf ("To make a shot, please enter any number.\nIt is advised that the number is between 0-1000 \n");
	scanf ("%d", &number);
	
	while (number%7!=0)
	{
		printf ("You missed the shot, try again!\n");
		printf ("To make a shot, please enter any number.\nIt is advised that the number is between 0-1000 \n");
     	scanf ("%d", &number);
	}
	if (number %7 == 0)
	{	
	printf ("Congratulations, you hit the target!\n\n");
	}
	printf ("To close the program type anything and then press enter \n");
	scanf ("%d", &exit);
return 0;
}
