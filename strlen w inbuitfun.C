#include<stdio.h>
#include<conio.h>
void main()
{
	char string[50];
	int i,length=0;
	clrscr();

	printf("enter a string\n");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	printf("the length of a string is the numer of characters in it\n");
	printf("so,the lrngth of %s=%d\n",string,length);
	getch();
}