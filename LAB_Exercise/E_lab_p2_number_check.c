//Write a C program that takes an integer from the user and checks the following using
//different operators:
//o Whether the number is even or odd.
//o Whether the number is positive, negative, orzero.
//o Whether the number is a multiple of both 3 and 5.
#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\tEnter the number of a :");
	scanf("%d",&a);
	
	if(a%2==0)
		printf("\n\n\tNumber is even.");
	else
		printf("\n\n\tNumber is odd.");
		
	if(a>0)
		printf("\n\n\tNumber is positive.");
	else if(a<0)
		printf("\n\n\tNumber is negative.");
	else
		printf("\n\n\tNumner is Zero.");
		
	if(a/3 || a/5)
		printf("\n\n\tNumber is divisible by 3 and 5");
	else
		printf("\n\n\tNumber is not divisible by 3 and 5.");
		
	
}





































