#include<stdio.h>
#include<conio.h>
void main()
{
    int i,x,y,gcd;
    printf("Enter the first number");
    scanf("%d",&x);
    printf("\nEnter the second number");
    scanf("%d",&y);
    for(i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        {
            gcd=i;
        }
    }
    printf("\nLcm is %d",(x*y/gcd));
}
