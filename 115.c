#include <stdio.h>

int main(void)
{
	int n,a[100],k,i,j,t;
	printf("\nEnter the size : ");
	scanf("%d",&n);
	printf("\nEnter the k value : ");
	scanf("%d",&k);
	printf("\nEnter the array elements: ");
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
	printf("\nThe %d smallest number is %d .",k,a[k-1]);
	return 0;
}
