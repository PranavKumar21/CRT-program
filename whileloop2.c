#include<stdio.h>
int main()
{
	int a,n,r,sum=0;
	a=n;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==a)
	printf("armstrong",sum);
	else
	printf("not armstrong",sum);
	return 0;
}
