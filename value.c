//write a program call by value...
#include<stdio.h>
void modify(int n)
{
	n=n+10;
}
int main()
{

int n=10;
printf("before modigy n=%d \n",n);
modify(n);
printf("after modify n=%d \n",n);
return 1;
}