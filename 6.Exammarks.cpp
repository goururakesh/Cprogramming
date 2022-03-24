//write a program to enter the marks
#include<stdio.h>
int main()
{
	int i;

	printf("Enter your marks\n");
	scanf("%d",&i);
	if(i>=70 && i<=80)
	printf("Distinction\n");
	else if(i>=60 && i<=70)
	printf("fristclass\n");
	else if(i>=50 && i<60)
	printf("secondclass\n");
	else 
	{
		printf("fail\n");
	}
	
	return 0;
}