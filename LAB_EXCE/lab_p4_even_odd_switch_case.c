//Write a C program to check if a number is even or odd using an if-else
//statement. Extend the program using a switch statement to display the month
//name based on the user’s input (1 for January, 2 for February, etc.).
#include<stdio.h>
main()
{
//	int a;
//	
//	printf("\n\n\tEnter the number of a : ");
//	scanf("%d",&a);
//	
//	if(a%2==0)
//		printf("\n\n\tNumber is even");
//	else
//		printf("\n\n\tnumber is odd");

	int choice;
	
	printf("\n\n\tEnter the choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\n\n\tJanuary");
		         break ;
		case 2 : printf("\n\n\tFebruary");
		         break ;
		case 3 : printf("\n\n\tMarch");
		         break ;
		case 4 : printf("\n\n\tApril");
		         break ;
		case 5 : printf("\n\n\tMay");
		         break ;
		case 6 : printf("\n\n\tJune");
		         break ;
		case 7 : printf("\n\n\tJuly");
		         break ;
		case 8 : printf("\n\n\tAugust");
		         break ;
		case 9 : printf("\n\n\tSeptember");
		         break ;
		case 10 : printf("\n\n\tOctober");
		         break ;
		case 11 : printf("\n\n\tNovember");
		         break ;
		case 12 : printf("\n\n\tDecember");
		         break ;
		
		default : printf("Invalid choice!!");
		
	}	
}



















































