#include<stdio.h>
void main()
{
    int i,n,m,k,a[10];
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the value to check");
    scanf("%d",&k);
    printf("Enter the sequence of numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            printf("%d",a[i]);
        }
    
    }
    
   
}
    
