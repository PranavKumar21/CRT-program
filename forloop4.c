// factorial of real number
# include<stdio.h>
int main()
{
	int n,fact,i;
	fact=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		fact=fact*i;
	printf("the factorial is \n%d",fact);
	return 0;
}
