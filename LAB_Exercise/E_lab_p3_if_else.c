//Write a C program that takes the marks of a student as input and displays the corresponding
//grade based on the following conditions:
//o Marks > 90: Grade A
//o Marks > 75 and <= 90: Grade B
//o Marks > 50 and <= 75: Grade C
//o Marks <= 50: Grade D
// Use if-else or switch statements for the decision-making process.
#include<stdio.h>
int main()
{
	int name,marks;
	
	printf("\n\n\tEnter the student name :");
	scanf("%s",&name);
	printf("\n\t-----------------------------------");
	printf("\n\n\t Enter the marks of subject :");
	scanf("%d",&marks);		
	printf("\n\t-----------------------------------");
		if(marks>=90)
		{
			printf("\n\n\tGrade A");
		}
		
		else if(marks>75 &&marks<= 90)
		{
			printf("\n\n\tGrade B");
		}
		
		else if(marks>50 && marks<= 75)
		{
			printf("\n\n\tGrade C");
		}
	
		else if(marks<=50)
		{
			printf("\n\n\tGrade D");
		}
		else
		{
			printf("\n\n\tFail .");	
		}
		
	
}
	
	
	













































