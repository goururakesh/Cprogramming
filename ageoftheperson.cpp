//write a program to age of a person 
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age=");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("The person with age %d is major\n",age);
	}
	else
	{
		printf("The person with age %d is minor\n",age);
	}
}