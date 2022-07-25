#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x=0,y=1;
	clrscr();
	printf("fibonacci series<1000 are:\n");
	i=0;
	while(i<11)
	{
	printf( " %d",x);
	x=y;
	y=x+y;
	i++;
}
getch();
}

