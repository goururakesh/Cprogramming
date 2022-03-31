//write a program which takes two integer operands and are operator from the user performs the operation and then
//prints the result(consider the operator +,-,*,/,%, and use the switch statement )


#include<stdio.h>
int main()
{
	char choice;
	int a,b,c;
	printf("Enter your choice=");
	scanf("%c",&choice);
	switch(choice)
	{
		case'+':
		printf("Enter any two numbers=");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("sum=%d",c);
		break;
		case'-':
		printf("Enter any two numbers=");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("difference=%d",c);
		break;
		case'*':
		printf("Enter any two numbers=");
		scanf("%d%d",&a,&b);
		c=a*b;
		printf("product=%d",c);
		break;
		case'/':
		printf("Enter any two numbers=");
		scanf("%d%d",&a,&b);
		c=a/b;
		printf("quotient=%d",c);
		break;
		case'%':
		printf("Enter any two numbers=");
		scanf("%d%d",&a,&b);
		c=a%b;
		printf("remainder=%d",c);
		break;
		
		default :
			printf("\n invalid choice");
			break;
	}
	return 0;5
}