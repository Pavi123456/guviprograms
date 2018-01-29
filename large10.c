#include<stdio.h>
void main()
{
int a[10],n,i,j,temp,avg;
printf("\nEnter the size of array");
scanf("%d",&n);
printf("\nEnter values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nLargest value is: %d",a[i-1]);
}
