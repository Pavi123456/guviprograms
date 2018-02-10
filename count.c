#include<stdio.h>
void main()
{
    int n,a,r,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a=a/10+r;
        n=n/10;
        c=c+1;
    }
    printf("\nNo.of digits is %d",c);
}
