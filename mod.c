#include<stdio.h>
void main()
{
    int a,b,c;
    float tot;
    printf("Enter the p,n,r value");
    scanf("%d%d%d",&a,&b,&c);
    tot=(a*b)%c;
    printf("Simple Interest is %f",tot);
}
