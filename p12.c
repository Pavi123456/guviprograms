#include<stdio.h>
void main()
{
	int a[100],i,n,k,j,t;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("\nEnter the no.of shift times");
	scanf("%d",&k);
	printf("\nEnter the array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	    t=a[n-1];
		for(j=n-1;j>=1;j--)
		{
		a[j]=a[j-1];
	    }
	    a[0]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
