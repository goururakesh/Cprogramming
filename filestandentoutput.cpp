//write a program to display the contens of a file to standent output devices...
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char name[30];
	int id;
	float marks;
	fptr=fopen("student.txt","w");
	if(fptr==NULL)
	{
		printf("file is not opened\n");
	}
	else
	{
		printf("file is opened\n");
	}
	fscanf(stdin,"%s%d%f",name,&id,marks);
	printf("\n");
	fprintf(stdout,"name=%s\n id=%d\n marks=%f\n",name,id,marks);
	fclose(fptr);
	
	
}