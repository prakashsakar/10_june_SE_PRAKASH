#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n,i;
	clrscr();
	n=5;
	printf("enter the element:%d\n",n);

	prt=(int*)calloc(n,sizeof(int));
	if(ptr==null){
	printf("memory not allocated\n");
	}
	else
	{
	printf("memory successfully allocated using calloc\n");

	for(i=0;i<n;i++){
	ptr[i]=i+1;
	}
	printf("the eliment array are");
	for(i=0;i<n;i++)
	{
	printf("%d",prt[i]);
	}
	}
	n=10;
	printf("\nenter the new size of array:%d\n",n);
	ptr=realloc(ptr,n*sizeof(int));

	printf("memory seccessfully re allocated using realloc");

	for(i=5;i<n;i++)
	{
	ptr[i]=i+1;
	}
	printf("the element of the array are:");
	for(i=0;i<n;i++)
	{
	printf("%d",ptr[i]);
	}
	free(ptr);
	}
	getch();
	}


