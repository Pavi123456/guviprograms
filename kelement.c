#include<stdio.h>
void main()
{
    int n,i,k,a[20];
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("\nEnter the value of k");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i==k)
        {
            printf("\nthe k th element is %d",a[i]);
        }
    }
}
