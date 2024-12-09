//Write a C program that accepts 10 integers from the user and stores them in an array. The
//program should then find and print the maximum and minimum values in the array.
//? Challenge: Extend the program to sort the array in ascending order.

#include<stdio.h>
main()
{
	int i,j, arr[10],max=0,min=arr[0],temp;
		printf("\n\n\t before sorting--------------");
	
	for(i=0;i<10;i++)
	{
		printf("\n\n\tarr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n\n\tmin element of array: %d",min);
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n\n\tmaximum element of array: %d",max);
	

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n\n\t After the sorting-----------");
	for(i=0;i<10;i++)
	{
		printf("\n\n\tarr[%d] : %d",i,arr[i]);
	
	}
	
	
	
}
