#include<stdio.h>
#include<conio.h>
void reversename();
int main()
{
	    clrscr();
	printf("\nenter a name:");
	reversename();
	return 0;
}
void reversename()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
	reversename();
	printf("%c",c);


    }
    getch();

}