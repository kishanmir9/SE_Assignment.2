//Write a C program that calculates the factorial of a number using a function.
//Include function declaration, definition, and call.
#include<stdio.h>
void fact();
main()
{
	fact();
		
}

void fact()
{
	int i,fact=1,n;
	printf("\n\n\tEnter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	
	}
	printf("\n\n\tFactorial number is : %d",fact);
	
}








































