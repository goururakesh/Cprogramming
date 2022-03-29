//write a program to display lower case and upper case letter using while

#include<stdio.h>
int main()
{
	int i;
	printf("lower case letter\n");
	i=97;
	while(i<122)
	{
		printf("%c\t",i);
		i++;
	}
	printf("\n upper case letter \n");
	i=65;
	while(i<=90)
	{
		printf("%c\t",i);
		i++;
	}
	return 0;
}