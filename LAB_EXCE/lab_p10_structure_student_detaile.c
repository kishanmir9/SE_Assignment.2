//Write a C program that defines a structure to store a student's details (name,
//roll number, and marks). Use an array of structures to store details of 3
//students and print them.
#include<stdio.h>

struct Student    
{
	int rollno;         //Structure member
	char sname[20];
	int sub[5];
	float per;

	
}S[3]; 


main()
{
	int i, total=0, st;
	
	for(st=0;st<3;st++)
	{
		printf("\n\n\t----------------------------------");
		printf("\n\n\t Student [%d] ---------------", st+1);
		printf("\n\n\t Enter Rollno : ");
		scanf("%d",&S[st].rollno);
		printf("\n\n\t Enter Name of the Student : ");
		scanf("%s",&S[st].sname);
	
		total=0;
		for(i=0;i<5;i++)
		{
			printf("\n\n\t Enter marks for subject[%d] : ",i+1);
			scanf("%d",&S[st].sub[i]);
			total=total+S[st].sub[i];
		}
	
		S[st].per=total/5;
	}
	
	for(st=0;st<3;st++)
	{
		printf("\n\n\t----------------------------------");
		printf("\n\n\t Student [%d] ---------------", st+1);
		printf("\n\n\n\t ----------------------------------------");
		printf("\n\n\t Rollno : %d", S[st].rollno);
		printf("\n\n\t Name of the Student : %s", S[st].sname);
	
		printf("\n\n\n\t ----------------------------------------");
		for(i=0;i<5;i++)
		{
			printf("\n\n\t Marks for subject[%d] : %d",i+1,S[st].sub[i]);
		
        }
        printf("\n\n\t ----------------------------------------");
        printf("\n\n\t total marks: %d",total);
		printf("\n\n\t ----------------------------------------");
		printf("\n\n\t Percentages : %.2f",S[st].per);
	}
}
	
	
	
	

