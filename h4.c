#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[1000],c[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	c[i]=0;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
	if(a[i]==a[j])
	{
		c[i]++;
	}
}
for(i=0;i<n;i++)
{
	if(c[i]==1)
	printf(" %d",a[i]);
}
}
