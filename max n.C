#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],max=0,min=0;
	int i;
	clrscr();
	printf("enter five value:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	else
	{
		min=a[i];
	}
   }
	printf("minimum is %d\n",min);
	printf("maximum is %d\n",max);
	getch();
}