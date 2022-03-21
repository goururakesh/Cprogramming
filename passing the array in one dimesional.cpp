// \write a program passing the array in one dimensional
#include<stdio.h>
int add(int a[5]);
main()
{
	int i,arr[5];
	printf("Enter the elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x=add(arr);
	printf("%d",x);
}
int add(int a[5])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}