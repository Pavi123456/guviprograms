#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("\nEnter the array values : ");
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
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<n)
		{
			printf("%d\t",a[i]);
		}
	}
}
