//Write a C program that takes an integer input from the user and prints its multiplication
//table using a for loop.
//? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n\n\tEnter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
}