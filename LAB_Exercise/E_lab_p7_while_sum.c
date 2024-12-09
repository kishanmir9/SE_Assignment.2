//Write a C program that takes an integer from the user and calculates the sum of its digits
//using a while loop.
//? Challenge: Extend the program to reverse the digits of the number.
#include<stdio.h>
main()
{
	int a,sum=0,i;
	
	printf("\n\n\tEnter the number :");
	scanf("%d",&a);
	i=a;
	while(i>=1)
	{
		printf("\n\n\t%d",i);
		sum+=i;
		i--;	
	}
	printf("\n\tsum:%d",sum);
}