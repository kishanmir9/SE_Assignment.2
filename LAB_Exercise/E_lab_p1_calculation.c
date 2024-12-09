//Write a C program that acts as a simple calculator. The program should take two numbers
//and an operator as input from the user and perform the respective operation (addition,
//subtraction, multiplication, division, or modulus) using operators.
//? Challenge: Extend the program to handle invalid operator inputs.

#include<stdio.h>
main()
{
	int a,b;
	char choice;
	printf("\n\n\tEnter the number of a: ");
	scanf("%d",&a);
	printf("\n\n\tEnter the number of b: ");
	scanf("%d",&b);
	
	printf("\n\n\tEnter the oprater to make claculation :");
	scanf(" %c",&choice);
	
	if(choice=='+')
	{
		 printf("\n\n\tAddition : %d",a+b);
	}
	else if(choice=='-')
	{				  
		 printf("\n\n\tSubtraction : %d",a-b);
	}
	else if(choice=='/')
	{				  
		 printf("\n\n\tDivision : %d",a/b);
	}
	else if(choice=='*')
	{			  
		 printf("\n\n\tMultipliction : %d",a*b);
	}
	else if(choice=='%')
	{
		printf("\n\n\tModualo : %d",a%b);
	}
	else
	{
		 printf("\n\n\tInvalid oprater!!!");
	}
	
}
	