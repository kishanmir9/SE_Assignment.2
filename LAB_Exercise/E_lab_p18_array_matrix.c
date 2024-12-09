//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
//resultant matrix.
//? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include<stdio.h>
main()
{
	int  r , c , m1[2][2] , m2[2][2] , sum[2][2];
	printf("______MATRIX 1________\n");

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter  number of m1[%d][%d] = ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
		printf("______MATRIX 2________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter number of  m2[%d][%d] = ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
		printf("______MATRIX 1________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
		printf("______MATRIX 2________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=m1[r][c]+m2[r][c];
		}
	}
		printf("______Resultant  MATRIX________\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",sum[r][c]);	
		}
		printf("\n");
	}
		
}