//Write a C program that takes two strings from the user and concatenates them
//using strcat(). Display the concatenated string and its length using
//strlen().
#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20],str3[40];
	
	printf("\n\n\tEnter the string1 :");
	 gets(str1);
	printf("\n\n\tEnter the string2 :");
	 gets(str2);
	 
	
	printf("\n\n\tConcatemates of string : %s",strcpy(str3,strcat(str1,str2)));
	printf("\n\n\tLength of string : %d",strlen(str3));
}
	
	