//? Write a C program that checks whether a given number is a prime number or not using a
//for loop.
//? Challenge: Modify the program to print all prime numbers between 1 and a given number.
#include<stdio.h>
main()
{
	int i,n ,count=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	if (n == 0 || n == 1)
    	count = 1;
	for(i=0;i<=n;i++)
	{
		if (n%2== 0)
		{
      		count = 1;
      	}
		printf("\n%d",i);
	}
	if (count==0)
    	printf("\n%d is a prime number.", n);
  	else
    	printf("\n%d is not a prime number.", n);
}
	
	
	
	
	
	