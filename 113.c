#include<stdio.h>
void main()
{
    int i,n,m,k,a[10],flag,c=0;
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
        if(a[i]==k)
        {
            printf("\nYes");
            flag=1;
            c=c+1;
        }
    
    }
    if(flag==0)
    {
        printf("\nNo");
    }
    printf("the no.of repitions of %d number is %d",k,c);
}
    
