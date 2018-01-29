#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp,sum,a[20];
    printf("\nEnter the number: ");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
     temp=n%10;
     a[i]=temp;
     n=n/10;
     i++;
     }
     for(j=i-1;j>=0;j--)
     {
     sum=sum+a[j];
     }
     printf("\nThe sum is %d",sum);
}
