#include<stdio.h>
void main()
{
    int p,n,r;
    float tot;
    printf("Enter the p,n,r value");
    scanf("%d%d%d",&p,&n,&r);
    tot=(p*n*r)/100;
    printf("Simple Interest is %f",tot);
}
