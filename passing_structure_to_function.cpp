//write a program for passing the structure to function
#include<stdio.h>
struct address
{
	char city[20];
	int pin;
	char phone[15];
};
struct employee
{
	char name[20];
	struct address add;
};
void display(struct employee);
int  main()
{
	struct employee emp;
	printf("Enter employee information?\n");
	scanf("%s %s %d %s",emp.name,emp.add,&emp.add.pin,emp.add.phone);
	display(emp);
}
void display(struct employee emp)
{
	printf("printing the details.......\n");
	printf("%s %s %d %s",emp.name,emp.add,emp.add.pin,emp.add.phone);
}