// find out upper or loweror digit or special char
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
		printf("upper case alphabet");
	else if(ch>=97&&ch<=122)
		printf("lower case alphabet");
	else if(ch>=48&&ch<=57)
		printf("digit");
	else
		printf("special charecter");
	return 0;
	
}
