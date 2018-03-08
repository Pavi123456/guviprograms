#include<stdio.h>
void main()
{
	int a[20],n,i,j,t,count,k;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("\nEnter the value of k : ");
	scanf("%d",&k);
	printf("\nEnter the array values : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			count++;	
			}
		}
	if(count==k)
	{
		printf("%d",a[i]);
	}
    }
}
