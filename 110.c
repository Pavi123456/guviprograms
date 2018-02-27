#include<stdio.h>
void main()
{
    int i,k,sum=0;
    printf("Enter the size of array");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is :%d",k,sum);
}
