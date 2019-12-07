//print n natural numbers
#include<stdio.h>
//program-1
/*int main()
{
	int n,i;
	scanf("%d",&n);
	//if i=0 in for(i=.........) ,even numbers; if 1=1 odd
	for (i=1;i<=n;i=i+2)
	printf("\n%d",i);
	return 0;
}*/
//program-2
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	// if i%2==1 , odd,, else even
	 	if(i%2==0)
		printf("\n%d",i);
	}
	return 0;
}


