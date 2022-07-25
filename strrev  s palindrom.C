#include<stdio.h>
#include<string.h>
void ispalindrom(char str[])
{
	int l=0;
	int h=strlen(str)-1;
	while(h>1)
	{
	  if(str[l++]!=str[h--])
	  {
	  printf("%s is not a palindrom\n",str);
	  return;
	}
}
	printf("%s is a palindrom\n",str);
	}

int main()
	{
	 ispalindrom("string");
	 return 0;
	}