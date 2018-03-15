#include<stdio.h>
void main()
{
    int a[100],b[100],i,n,t;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the value of a");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            t=a[i];
        }
    }
    printf("\n%d",t);

}
