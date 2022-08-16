#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n,i;
	clrscr();
	printf("enter the element:");
	scanf("%d",&n);
	printf("entered the element:%d\n",n);

	prt=(int*)malloc(n*sizeof(int));
	if(ptr==null){
	printf("memory not allocated\n");
	}
	else
	{
	printf("memory successfully allocated using malloc\n");

	for(i=0;i<n;i++){
	ptr[i]=i+1;
	}
	printf("the element array are");
	for(i=0;i<n;i++)
	{
	printf("%d",prt[i]);
	}
	}

	n=10;

	printf("enter the new size ofthe array :%d",n);

	ptr=realloc(ptr,n*sizeof(int));
	printf("memory successfully allocated using realloc\n");

	for(i=5;i<n;i++)
	{ptr[i]=i+1;}

	printf("the element array are");
	for(i=0;i<n;i++)
	{
	printf("%d",prt[i]);
	}
	free(ptr);
	}

