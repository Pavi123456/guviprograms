#include<stdio.h>
void main()
{
	int n,k,c=0,i;
	printf("Enter the number");
	scanf("%d",&k);
	printf("\nEnter the power");
	scanf("%d",&n);
	for(i=1;i<=k;i++)
	{
		n=n*n;
		if(n==k)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
