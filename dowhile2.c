//fibonaci series
#include<stdio.h>
int main()
{
	int n,i,x1=0,x2=1,x;
	scanf("%d",&n);
	printf("%d\n%d",x1,x2);
	i=1;
	do
	{
		x=x1+x2;
		printf("\n%d",x);
		x1=x2;
		x2=x;
		i++;
	}
	while(i<=n);
	
	return 0;
}
