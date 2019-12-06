//biggest number
# include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	printf("\nthe biggest number is :%d",c);
	return 0;
}
