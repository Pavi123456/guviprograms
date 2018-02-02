#include<stdio.h>
int main()
{
    int n,b;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        if(b%2==1)
        printf("%d\n",b);
        n=n/10;
    }
    return 0;
}
