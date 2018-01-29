#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else
    {
        n=n-1;
        printf("%d",n);
    }
}
