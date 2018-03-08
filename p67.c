#include<stdio.h>
void main()
{
	int n=1,i,fact=1;
	printf("Enter the value for factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial is %d",fact);
}
