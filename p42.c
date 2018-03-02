#include<stdio.h>
void main()
{
	int a[100],j,i,n,c=0;
	printf("Enter the array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			c++;
			}
		}
	}
	if(c==0)
	{
	printf("\nYes");
	}
	else
	{
		printf("\No");
	}
	
}
