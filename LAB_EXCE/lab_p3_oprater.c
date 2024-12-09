//Write a C program that accepts two integers from the user and performs
//arithmetic, relational, and logical operations on them. Display the results.
#include<stdio.h>
main()
{
	int a;
	int b;
	
	printf("\n\n\tEnter the number of a :");
	scanf("%d",&a);
	printf("\n\n\tEnter the number of b :");
	scanf("%d",&b);
	
	//arithmetic oprations
	printf("\n\n\t------arithmetic oprations------");
	printf("\n\n\tAddition : %d",a+b);
	printf("\n\n\tSubtraction : %d",a-b);
	printf("\n\n\tMultiplication : %d",a*b);
	printf("\n\n\tDivision : %d",a/b);
	printf("\n\n\tModulo : %d",a%b);

	//relational oprations
	printf("\n\n\t------relational oprations------");
	printf("\n\n\tDuble equal: %d",a==b);
	printf("\n\n\tNot equal : %d",a!=b);
	printf("\n\n\tGreter than equal : %d",a<=b);
	printf("\n\n\tLess than equal : %d",a>=b);
	printf("\n\n\tGreter than : %d",a<b);
	printf("\n\n\tLess than : %d",a>b);
	
	//logical oprations
	printf("\n\n\t------logical oprations------");

	printf("\n\n\t And logical oprater");
	if(a==b && b==a)
		printf("\n\n\tequal");
	else
		printf("\n\n\tnot equal");
	
	printf("\n\n\t Or logical oprater");
	
	if(a==b || b==a)
		printf("\n\n\tequal");
	else
		printf("\n\n\tnot equal");

	printf("\n\n\t not logical oprater");	
	if(!(a==b))
		printf("\n\n\tdiffrant");
	else
		printf("\n\n\tsame");	
	
}