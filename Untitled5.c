//biggest number
# include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter numbers");
	scanf("%d%d%d",&a,&b,&c);
	c=(a>b&&a>c)?a:b>c?b:c;
	printf("\nthe biggest number is :%d",c);
	return 0;
}
