#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,ans;
	char choice;
	clrscr();
	printf("enter the number:");
	scanf("%d%d",&n1,&n2);
	printf("+.add\n-.sub\n*.mult\n/.div\n%.modulus\=.nyour choice:");
	choice=getche();
	printf("\n");
	switch (choice)
	{
		case'+':ans=n1+n2;
		printf("sum=%d",ans);
		break;
		case'-':ans=n1-n2;
		printf("sub=%d",ans);
		break;
		case'*':ans=n1*n2;
		printf("mult=%d",ans);
		break;
		case'/':ans=n1/n2;
		printf("div=%d",ans);
		break;
		case'%':ans=n1%n2;
		printf("modulus=%d",ans);
		break;
		default:printf("enter valid value");
		}
	getch();
}