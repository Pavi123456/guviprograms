#include<stdio.h>
void main()
{
    int a[100],b[100],n,i,j;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the first sorted array values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the second sorted array values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        
        if(a[i]==b[i])
        {
            printf("\t%d",a[i]);
        }
        
    }
}
