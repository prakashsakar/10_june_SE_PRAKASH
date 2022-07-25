#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,j;
	printf("array size:");
	scanf("%d",&n);
	printf("element");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++)
	{
	for(int j=1;j<n;j++)
	{
	if(a[j]>a[i])
	{
	int tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
	}
	}
	}
	printf("\n\nacending:");
	for( i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	for( i=0;i<n;i++)
	{
	for( j=0;j<n;j++)
	{
	if(a[j]<a[i])
	{
	int tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
	}
	}
	}
	printf("\n\ndescending:");
	for( i=0;i<n;i++)

	{
		printf("%d",a[i]);
	}
	return 0;
	getch();
	}