//Write a C program that takes three numbers from the user and determines:
//o The largest number.
//o The smallest number.
//? Challenge: Solve the problem using both if-else and switch-case statements.
#include<stdio.h>
main()
{
  	int n1, n2, n3;

  	printf("Enter number 1: ");
  	scanf("%d",&n1);
  	printf("Enter number 2: ");
  	scanf("%d",&n2);
  	printf("Enter number 3: ");
  	scanf("%d",&n3);
  	
  														//largest
  	if (n1 >= n2 && n1 >= n3)
    	printf("\nn1 =%d is the largest number.", n1);
	if (n2 >= n1 && n2 >= n3)
   	 	printf("\n%d is the largest number.", n2);
	if (n3 >= n1 && n3 >= n2)
   	 	printf("\n%d is the largest number.", n3);
   													//smallest
  	if (n1 <= n2 && n1 <= n3)
		printf("\n%d is the smallest number.",n1);
	if (n2 <= n1 && n2 <= n3)  
		printf("\n%d is the smallest number.",n2);
	if (n3 <= n1 && n3 <= n2)
		printf("\n%d is the smallest number.",n3);
		

	
}



















