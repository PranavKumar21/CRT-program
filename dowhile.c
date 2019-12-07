// do while loop:
//syn:
	//do
	//{
	   //statements;
	   
   // }
   //while(condition);
   
   
   // 1-n numbers
  
  #include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}
	while(i<=n);
	
	return 0;
}
