#include<stdio.h>
void main()
{
    int n,i,l=2,flag=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        l*=2;
        if(l==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    printf("\nYes");
    else
    {
        printf("\nNo");
    }
}
