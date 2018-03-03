#include<stdio.h>
int main()
{
	int n,k,a[100],j,c=0,i;
	printf("Enter the number");
	scanf("%d",&n);
	printf("\nEnter the sum value");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				c++;
			}
		}
	}
	if(c>=1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	return 0;
}
