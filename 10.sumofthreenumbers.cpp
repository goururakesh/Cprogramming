//write a program using functions sum of three numbers

#include<stdio.h>
void add(int x,int y,int z);
main()
{
	int a,b,c;
	printf("Enter any three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	add(a,b,c);
}
void add(int x,int y,int z)
{
	int sum;
	sum=x+y+z;
	printf("%d",sum);
 } 