//for loop:
//syntax:
//only 1 statement
	//for(initialization;condition;increment/dec)
	//statement;
//for multi statements
	// for(initialization;condition;increment/dec)
	// {
	//	statement-1;
	//	statement-2;
	//	........statement-x
	// }
	
//print 1 to n number
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	printf("\n%d",i);
	return 0;
}
