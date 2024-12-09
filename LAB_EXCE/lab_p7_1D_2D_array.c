//Write a C program that stores 5 integers in a one-dimensional array and prints
//them. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements.
#include<stdio.h>
main()
{
//	int arr[5],i;
//	
//	for(i=0;i<5;i++)
//	{
//		printf("\n\n\tEnter the array element [%d] :",i);
//	    scanf("%d",&arr[i]);
//	
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("\n\n\tarr[%d] : %d",i,arr[i]);
//	
//	}

	int arr[3][3],r,c,sum=0;
	
	printf("\n\n\t---------array---------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
	
		printf("\n\n\tEnter the array element [%d][%d] :",r,c);
	    scanf("%d",&arr[r][c]);
	    }
	
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
	
		printf("%d",arr[r][c]);
		sum+=arr[r][c];
	    }
	    printf("\n");
	
	}
	printf("\n\n\tThe sum of element : %d",sum);
	


	


	

	
	
	
}






























