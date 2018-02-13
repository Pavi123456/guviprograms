#include<stdio.h>
void main()
{
    int n,r,a=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a=a+(r*r);
        n=n/10;
    }
    printf("%d",a);
    
}
