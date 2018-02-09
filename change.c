#include <stdio.h>

void main()
{
	int a[1000],i,j,t,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			    printf("\nThe changed value is %d",a[i]);
			}
			
			
		}
	}
	
}
