#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    if(a%b==0)
    {
        c=a/b;
        c=c*b;
        printf("\nThe GCD value is %d",c);
    }
    else
    {
        a=a*b;
        printf("\nThe GCD value is %d",a);
    }
}
