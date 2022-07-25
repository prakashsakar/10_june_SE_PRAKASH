#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned int no,sum;
	clrscr();
	printf("enter any number:");
	scanf("%u",&no);
	sum=no%10;
	while(no>9)
	{
		no=no/10;
	}
	sum=sum+no;
	printf("sum of first and last digit is:%d",sum);
	getch();
}