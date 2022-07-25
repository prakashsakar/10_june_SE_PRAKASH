#include<stdio.h>
#include<conio.h>
long int multiplynumbers(int n);
int main()
{
	int n;
	clrscr();
	printf("enter a positive number:");
	scanf("%d",&n);
	printf("factorial of %d=%ld",n,multiplynumbers(n));
	getch();
}
long int multiplynumbers(int n)
{
	if(n>=1)
	return n*multiplynumbers(n-1);
	else
	return 1;
}