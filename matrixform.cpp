//write a program to print the 3/3 martrix form

#include<stdio.h>
int main()
{
	int i,j,c,r,a[9][9];
	printf("Enter the number of rows= ");
	scanf("%d",&r);
	printf("Enter the number of column= ");
	scanf("%d",&c);
	printf("Enter the element of a matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Element of a matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\t");
	}
	return 0;
	
}